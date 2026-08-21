class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int prof =0;
      int maxprofit=0;
       for(int i = 0;i<prices.size();i++){
        for (int j = i+1;j<prices.size();j++){
            int prof = prices[j] - prices[i];
    maxprofit = max(maxprofit,prof);
        }
       }  
       return maxprofit;
       
    }
};
