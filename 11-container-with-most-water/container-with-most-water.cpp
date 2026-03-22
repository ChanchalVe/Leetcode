class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int maxarea = 0;

        int i = 0;
        int j = n-1;

        while(i < j){
            int area = 0;
            area = min(height[i], height[j]) * (j-i);
            
            maxarea = max(maxarea, area); 

            if(height[i] > height[j]){
                  j--;

            }else{            
                i++;
                }
          

        }
        return maxarea;

    }
};