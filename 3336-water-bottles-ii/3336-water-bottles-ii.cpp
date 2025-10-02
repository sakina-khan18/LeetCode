class Solution {
public:
    int maxBottlesDrunk(int nb, int ne) {
        int ans=nb;
        while(nb>=ne)
        {
            ans++;

            nb-=ne;
            nb++;
            ne++;
            
        }
        return ans;
    }
};