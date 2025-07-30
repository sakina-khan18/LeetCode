class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=1,b=1;
        int a1=0,b1=0;
        for(int i=0;i<colors.size();i++)
        {
            if(colors[i]==colors[i+1])
            {
                if(colors[i]=='A')
                a++;
                else
                b++;
            }
            else
            {
                if(a>2)
                a1+=a-2;
                if(b>2)
                b1+=b-2;
                a=1,b=1;
            }
        }
        if(a>2)
                a1+=a-2;
                if(b>2)
                b1+=b-2;
        if(a1>b1)
        return true;
        return false;


    }
};