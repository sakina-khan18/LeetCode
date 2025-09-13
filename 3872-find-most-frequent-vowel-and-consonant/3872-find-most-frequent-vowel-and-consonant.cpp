class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> m;
        for(int i=0;i<s.length();i++)
        m[s[i]]++;
        int vow=0,con=0;
    
        for(auto p:m)
        {
            if(p.first=='a'||p.first=='e'||p.first=='i'||p.first=='o'||p.first=='u')
            vow=max(vow,p.second);
            else
            con=max(con,p.second);
        }
        return vow+con;
    }
};