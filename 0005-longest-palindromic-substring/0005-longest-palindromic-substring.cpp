class Solution {
public:
    string longestPalindrome(string s) {
        vector<vector<int>> dp(s.length(),vector<int> (s.length(),0));
        for(int i=0;i<s.length();i++)
        dp[i][i]=1;
        int start=0,end=0;
        int max=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1])
            {dp[i][i+1]=1;
            start=i;
            end=i+1;}
        }
        int n=s.length();
        for(int i=2;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                int k=i+j;
                if(s[j]==s[k]&&dp[j+1][k-1])
                {dp[j][k]=1;
                start=j;
                end=k;
                }
                
            }
        }
        return s.substr(start,end-start+1);
        
    }
};