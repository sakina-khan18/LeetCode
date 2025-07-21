class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        int n=folder.size();
        string start=folder[0];
        vector<string> res;
        
        if(n==1)
        return folder;
        for(int i=1;i<n;i++)
        {
           int len=start.length();
           cout<<folder[i]<<" ";
           if(folder[i].substr(0,len)==start&&folder[i][len]=='/')
           {
            cout<<i<<" ";
             continue;
           }
           else
           {
            res.push_back(start);
            start=folder[i];
           }
        }
        res.push_back(start);
        return res;
    }
};