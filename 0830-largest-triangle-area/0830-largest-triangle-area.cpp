class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans=0;
        for(int i=0;i<points.size();i++)
        {
            for(int j=i+1;j<points.size();j++)
            {
                for(int k=j+1;k<points.size();k++)
                {
                    double y1=points[j][1]-points[k][1];
                    double y2=points[k][1]-points[i][1];
                    double y3=points[i][1]-points[j][1];
                    double t1=0.5*abs(double(points[i][0]*y1+points[j][0]*y2+y3*points[k][0]));
                    ans=max(t1,ans);
                    
                }
            }
        }
        return ans;
    }
};