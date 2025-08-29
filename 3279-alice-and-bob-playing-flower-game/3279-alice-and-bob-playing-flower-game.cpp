class Solution {
public:
    long long flowerGame(int n, int m) {
        long long ans=0;
        int mini=min(n,m);
        int maxi=max(n,m);
        for(int i=1;i<=maxi;i++)
        {
            if(i%2)
            {
                ans+=(mini/2);
            }
            else
            ans+=((mini+1)/2);
        }
        return ans;
        
    }
};