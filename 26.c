

int removeDuplicates(int* nums, int numsSize){
    int i,j=0;
    for(i=0;i<numsSize;i++){
        nums[j] = nums[i];
        j++;
        while(i+1<numsSize && nums[i+1]==nums[i]){
            i++;
        }
    }
    return j;
}

