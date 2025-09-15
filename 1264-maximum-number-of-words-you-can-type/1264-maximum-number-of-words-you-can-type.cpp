class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        map<char,int> m;
        for(int i=0;i<brokenLetters.length();i++)
        m[brokenLetters[i]]++;
        int count=0;
        int pre=0;
        string res="";
        for(int i=0;i<text.length();i++)
        {
            if(text[i]!=' ')
           { res+=text[i];
           if(m[text[i]]==1)
           pre=1;

           }
            else
            {
              if(pre==0)
              count++;
              pre=0;
              res="";
            }
        }
        if(pre==0)
              count++;
              pre=0;
              res="";
        return count;
    }
};