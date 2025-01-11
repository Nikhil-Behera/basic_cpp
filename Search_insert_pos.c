int searchInsert(int* nums, int numsSize, int target) {
    int lo=0;
    int hi=numsSize-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;

        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            hi=mid-1;
        }
        else if(nums[mid]<target){
            lo=mid+1;
        }
    }
    
    return lo;
}