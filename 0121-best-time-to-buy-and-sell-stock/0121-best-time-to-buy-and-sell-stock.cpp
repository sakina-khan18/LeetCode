class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=*max_element(prices.begin(),prices.end());
        int pos=-1;
        int n=prices.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
           if(prices[i]<maxi)
           {
            maxi=prices[i];
           }
           if(prices[i]-maxi>ans)
           {
            ans=prices[i]-maxi;
           }
        }
        return ans;
    }
};