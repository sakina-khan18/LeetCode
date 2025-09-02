class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
         int count=0;
         int n=points.size();
         sort(points.begin(),points.end(),[](const auto& a,const auto&b)
         {
            if(a[0]==b[0])
            return a[1]>b[1];
            return a[0]<b[0];
         });
         for(int i=0;i<n;i++)
         {
            int p1=points[i][1];
            int b=INT_MIN;
            for(int j=i+1;j<n;j++)
            {
                int np=points[j][1];
                if(b<np&&np<=p1)
                {
                    count++;
                    b=np;
                    if(b==p1)
                    break;
                }
            }
         }
         return count;
    }
};