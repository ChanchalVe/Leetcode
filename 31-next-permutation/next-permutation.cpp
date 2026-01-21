class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;

        for( int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]) {
                ind = i;
                break;
            }
        }

        if( ind == -1 ){
            reverse(nums.begin(), nums.end());
            return;

        }

        for(int l = n-1; l > ind; l--){
            if(nums[l] > nums[ind]){
                swap(nums[l], nums[ind]);
                break;
            }

        }
        reverse(nums.begin() + ind + 1, nums.end());
        
       

        
    }
};