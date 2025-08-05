class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        
        int count=0;
     map<int,int> m;
        for(int i=0;i<fruits.size();i++)
        {
            for(int j=0;j<fruits.size();j++)
            {
                if(m[j]==0&&fruits[i]<=baskets[j])
                {
                    m[j]=1;
                    count++;
                    break;
                }
            }
        }
        
        return fruits.size()-count;
    }
};