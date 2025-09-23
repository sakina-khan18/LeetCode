class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream s1(version1);
        stringstream s2(version2);
        string t;
        vector<int> v1,v2;
        while(getline(s1,t,'.'))
        {
            v1.push_back(stoi(t));
        }
          while(getline(s2,t,'.'))
        {
            v2.push_back(stoi(t));
        }
        while(v1.size()<v2.size())
        v1.push_back(0);
        while(v2.size()<v1.size())
        v2.push_back(0);
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]<v2[i])
            return -1;
            if(v1[i]>v2[i])
            return 1;
        }
        return 0;


    }
};