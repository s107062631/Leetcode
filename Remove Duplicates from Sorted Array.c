int removeDuplicates(int* nums, int numsSize) {
    int len=0;
    if(numsSize==0){
        return 0;
    }
    
    for(int i=0; i<numsSize; i++){
        if(nums[len]!=nums[i]){
            nums[++len] = nums[i];
        }
    }
    return len+1;
}