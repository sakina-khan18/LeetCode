class Solution {
public:
    int numWaterBottles(int nb, int ne) {
        int ans=nb;
        int left=0;
        while(nb>=ne)
        {
          ans+=nb/ne;
          nb=nb/ne+nb%ne;
        }
        return ans;
    }
};