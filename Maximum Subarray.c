int maxSubArray(int* nums, int numsSize) {
    int max=nums[0];
    
    for(int i=1; i<numsSize; i++){
        nums[i] = nums[i] + nums[i-1];
        if(max<nums[i]){
            max = nums[i];
        }
    }
    
    for(int i=0; i<numsSize-1; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[j]-nums[i]>max)
                max = nums[j]-nums[i];
        }
    }
    return max;
}