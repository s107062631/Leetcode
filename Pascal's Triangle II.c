/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    rowIndex++;
    int *arr[rowIndex];
    int *row;
    row = (int*)malloc(sizeof(int)*(rowIndex));
    for(int i=0; i<rowIndex; i++){
        arr[i]=(int*)malloc(sizeof(int)*(i+1));
    }
    
    arr[0][0] = 1;
    for(int i=1; i<rowIndex; i++){
        for(int j=0; j<i+1; j++){
            if(j==0 || j==i){
                arr[i][j] = 1;
            }else{
                arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
            } 
        }
    }
    
    returnSize[0] = rowIndex;
    for(int i=0; i<rowIndex; i++){
        row[i] = arr[rowIndex-1][i];
    }
    return row;
}