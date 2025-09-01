class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,int>> pq;
        for(int i=0;i<classes.size();i++)
        {
            double c=(double)(classes[i][0]+1)/(classes[i][1]+1)-(double)classes[i][0]/classes[i][1];
  
            pq.push({c,i});

        }
        while(extraStudents--)
        {
           double g=pq.top().first;
           int idx=pq.top().second;
            
              classes[idx][0]++;
            classes[idx][1]++;
            pq.pop();
            
            double cal = (double)(classes[idx][0] + 1) / (classes[idx][1] + 1) 
                           - (double)classes[idx][0] / classes[idx][1];
            pq.push({cal,idx});
        }
        double ans=0;
         for(int i=0;i<classes.size();i++)
         ans+=(double)classes[i][0]/classes[i][1];
        cout<<ans<<endl;
    return (double)ans/classes.size();
    }

};