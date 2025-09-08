class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<=n;i++)
        {
            int b=n-i;
            int count=0;
            int t1=i,t2=b;
            while(t1)
            {
                if(t1%10==0)
                count++;
                t1/=10;
            }
            int count2=0;
            while(t2)
            {
                if(t2%10==0)
                count2++;
                t2/=10;
            }
            if(count==0&&count2==0)
            return {i,b};
        }
        return {1,1};
       
        
    }
};