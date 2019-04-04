/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
void Intervalsort(struct Interval* intervals, int intervalsSize){
    struct Interval tmp;
    for(int i=1; i<intervalsSize; i++){
        for(int j=0; j<intervalsSize-i; j++){
            if(intervals[j].start > intervals[j+1].start){
                tmp = intervals[j];
                intervals[j] = intervals[j+1];
                intervals[j+1] = tmp;
            }
        }
    }
}

struct Interval* merge(struct Interval* intervals, int intervalsSize, int* returnSize) {
    if(intervalsSize==0){
        return intervals;
    }
    
    Intervalsort(intervals, intervalsSize);
    *returnSize = intervalsSize;
    int p=0, s=intervals[0].start, e=intervals[0].end;

    for(int i=1; i<intervalsSize; i++){
        if(e>=intervals[i].start){
            if(e<intervals[i].end)
                e = intervals[i].end;
            (*returnSize)--;
        }else{
            intervals[p].start = s;
            intervals[p].end = e;
            p++;
            s = intervals[i].start;
            e = intervals[i].end;
            printf("%d  %d", s, e);
        }
    }
    intervals[p].start = s;
    intervals[p].end = e;
    return intervals;
}