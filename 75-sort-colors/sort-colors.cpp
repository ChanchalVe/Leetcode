class Solution {
public:
    void sortColors(vector<int>& nums) {

        int zero = 0;
        int curr = 0;
        int two = nums.size()-1;

        while(curr <= two ){
            if(nums[curr] == 0){
                swap(nums[curr], nums[zero]);
                curr++;
                zero++;
            }
            else if(nums[curr] == 2){
                swap(nums[curr], nums[two]);
                two--;
            }
            else {
                curr++;
            }
        }    
    }
};

