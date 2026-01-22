class Solution {
public:
    int maxProfit(vector<int>& prices) {
          int cprice = prices[0]; 
        int profit = 0;
        

        for(int i = 0; i < prices.size(); i++){
            cprice = min(prices[i], cprice);
            if(cprice < prices[i]){
                profit = max(profit,  prices[i]- cprice);

                

            }      
            
        }
        return profit;
    }
};