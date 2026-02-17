class Solution {
public:

int solveBS(int low, int high, int target,vector<int>& nums){
   

    while(low <= high){
         int mid = low + (high - low) / 2;
        if(nums[mid] == target){
            return mid;
        }
        else if(target < nums[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    return -1;
}
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int rotidx = 0;

        for(int i = 1; i < n; i++){
            if(nums[i] < nums[i-1]){
                rotidx = i;
            }
        }

        if(rotidx == 0){ return solveBS(0, n-1, target, nums); }

        if(target >= nums[rotidx] && target <= nums[n-1]){ 
            return solveBS(rotidx, n-1, target, nums); 
        } else { 
            return solveBS(0, rotidx-1, target, nums); 
        }
        return -1;

        
        
    }
};