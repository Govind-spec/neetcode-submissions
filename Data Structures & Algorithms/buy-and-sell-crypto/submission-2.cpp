class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),count=0;
        int i=0,j=1;

        while(j<n){
            if(prices[j]<prices[i]){
                i=j;
               
            }
            else
                count=max(count,prices[j]-prices[i]);

                
            j++;
        }
        return count;
    }
};
