class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.length()+1,vector<int> (text2.length()+1,0));
        vector<vector<char>> le(text1.length()+1,vector<char> (text2.length()+1,'p'));
        for(int i=1;i<=text1.length();i++)
        {
           for(int j=1;j<=text2.length();j++)
           {
            if(text1[i-1]==text2[j-1])
           { dp[i][j]=dp[i-1][j-1]+1;
           le[i][j]='D';}
            else
            {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    if(dp[i][j]==dp[i-1][j])
                    le[i][j]='U';
                    else
                    le[i][j]='L';
            }
         
           }
        }
        string s;
       int i=text1.length(),j=text2.length();
        while(i>0&&j>0)
        {
         char c=le[i][j];
         if(c=='D')
         {
            i--,j--;
         }
         else if(c=='L')
         {
            j--;
         }
         else
         i--;
         s.push_back(text1[i]);
        }
        cout<<s<<endl;
        return dp[text1.length()][text2.length()];
    }
};