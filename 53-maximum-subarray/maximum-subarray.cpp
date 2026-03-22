class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int maxSum = nums[0];
        int sum = 0;

        
        if(n == 1){
            return nums[0];
        }
           for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            if(sum >= maxSum){
                maxSum = sum;
                
                
            }
            if(sum < 0){
                sum = 0;
            
            }
    

        }
        return maxSum;

        
    }
};