class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
       int t=k;
       if(k==1)
       return 'a';
        int count=0;
        while(k>0)
        {
            k>>=1;
            count++;
        }
        cout<<count<<endl;
        
        while(count--)
        {
            string st=s;
            for(int i=0;i<st.length();i++)
            {
                char ch=s[i];
             if(st[i]=='z')
             s+='a';
             else
             s+=(ch+1);
            }
            st=s;
        }
        cout<<s<<endl;
        return s[t-1];
        
    }
};