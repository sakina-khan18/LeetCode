class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        sort(p.begin(),p.end(),greater<int>());
        sort(t.begin(),t.end(),greater<int>());
        int ans=0;
        int n=p.size();
        int m=t.size();
        int i=0,j=0;
        int count=0;
        while(i<n&&j<m)
        {
          if(p[i]>t[j])
          i++;
          else if(p[i]<=t[j])
          {
            count++;
            i++;
            j++;
          }

        }
        return count;
    }
};