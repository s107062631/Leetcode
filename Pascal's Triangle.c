/**
 * Return an array of arrays.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int** columnSizes) {
    int **arr;
    if(numRows==0){
        columnSizes[0] = (int*)malloc(sizeof(int));
        return NULL;
    }
    arr = (int**)malloc(sizeof(int*)*numRows);
    columnSizes[0] = (int*)malloc(sizeof(int)*numRows);
    
    for(int i=0; i<numRows; i++){
        arr[i] = (int*)malloc(sizeof(int)*(i+1));
    }
    
    arr[0][0] = 1;
    columnSizes[0][0] = 1;
    for(int i=1; i<numRows; i++){
        for(int j=0; j<i+1; j++){
            if(j==0 || j==i){
                arr[i][j] = 1;
            }else{
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
        columnSizes[0][i] = i+1;
    }
    return arr; 
}