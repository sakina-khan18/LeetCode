class Solution {
public:
    int maxOperations(string s) {
        int count=0;
        int ans=0;
        int one=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1'&&count>0)
            {
                ans+=one;
                one++;
                count=0;
            }
            else if(s[i]=='1')
            one++;
            else
            count++;
        }
        if(s[s.length()-1]=='0')
        ans+=one;
        return ans;
    }
};