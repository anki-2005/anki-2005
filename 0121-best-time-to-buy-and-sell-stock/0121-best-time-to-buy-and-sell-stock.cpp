class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min=INT_MAX;
        int ma=0;
        int profit;
        for(int i=0;i<n;i++){
            if(prices[i]<min){
                min=prices[i];
            }
            else{
                profit=prices[i]-min;
            }
        ma=max(ma,profit);
    }
    return ma;
    }
};