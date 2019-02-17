/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry=1, val, *arr;
    
    for(int i=digitsSize-1; i>=0; i--){
        val = digits[i] + carry;
        digits[i] = val % 10;
        carry = val / 10;
    }

    returnSize[0] = digitsSize+carry;
    if(carry==1){
        arr = (int*)malloc(sizeof(int)*returnSize[0]);
        arr[0] = carry;
        for(int i=1; i<digitsSize+1; i++){
            arr[i] = digits[i-1];
        }
        
        return arr;
    }else{
        return digits;
    }
}