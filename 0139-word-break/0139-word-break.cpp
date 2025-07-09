class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string,int> m;
        for(int i=0;i<wordDict.size();i++)
        m[wordDict[i]]=1;
         vector<int> dp(s.length()+1,0);
        for(int i=1;i<=s.length();i++)
        {
            string str=s.substr(0,i);
          
            
        }
        dp[0]=1;
        int maxi=0;
        for(auto p:wordDict)
        {
            if(p.length()>maxi)
            maxi=p.length();
        }


       
        for(int i=1;i<s.length()+1;i++)
        {
            for(int j=i-1;j>=max(0,i-maxi-1);j--)
            {
                if(dp[j]&&m[s.substr(j,i-j)])
                {
                    dp[i]=1;
                    break;
                }
            }
        }
        return dp[s.length()];
    }
};