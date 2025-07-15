class Solution {
public:
    bool isValid(string word) {
         bool vow=false,cons=false;
            
        if(word.length()>2)
        {
           
            for(int i=0;i<word.length();i++)
            {
                if((word[i]>='a'&&word[i]<='z')||(word[i]>='A'&&word[i]<='Z'))
                {
                    if(word[i]=='a'||word[i]=='A'|| word[i]=='e'||word[i]=='E'||word[i]=='i'||word[i]=='I'|| word[i]=='u'||word[i]=='U'|| word[i]=='o'||word[i]=='O')
                    vow=true;
                     else
                cons=true;
                }
                else if(word[i]>='0'&&word[i]<='9')
                {
                    cout<<i<<endl;
                    continue;
                }
                else
                return false;
               
            }
           
        }
         if(vow&&cons)
            return true;
            return false;
    }
};