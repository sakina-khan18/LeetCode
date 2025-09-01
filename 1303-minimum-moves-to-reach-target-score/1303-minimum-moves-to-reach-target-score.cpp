class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        while(target!=1)
        {
            if(target%2)
            target--;
            else if(maxDoubles==0)
            {
                count+=target;
                count--;
                target=1;
                continue;
            }
            else
            {
                target/=2;
                maxDoubles--;
            }
            count++;
        }
        return count;
    }
};