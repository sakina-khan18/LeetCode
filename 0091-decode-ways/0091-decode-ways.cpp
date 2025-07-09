class Solution {
public:
    int numDecodings(string s) {
        vector<int> dp(s.length()+1,0);
        dp[0]=1;
        dp[1]=1;
        if(s[0]=='0')
        return 0;
        int n=s.length();
        for(int i=2;i<=s.length();i++)
        {
           
          int s1=s[i-1]-'0';
          int s2=stoi(s.substr(i-2,2));
          if(s1>=1&&s1<=9)
          dp[i]+=dp[i-1];
          if(s2>=10&&s2<=26)
          dp[i]+=dp[i-2];

        }
        for(int i=0;i<s.length();i++)
        cout<<dp[i]<<" ";
       return dp[s.length()];
    }
};