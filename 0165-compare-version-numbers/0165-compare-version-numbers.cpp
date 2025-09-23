class Solution {
public:
    int compareVersion(string version1, string version2) {
        version1+=".";
        version2+=".";
       vector<int> v1,v2;
       v1.push_back(-1);
       v2.push_back(-1);
       for(int i=0;i<version1.length();i++)
       {
        if(version1[i]=='.')
        v1.push_back(i);
       }

        for(int i=0;i<version2.length();i++)
       {
        if(version2[i]=='.')
        v2.push_back(i);
       }
     int i=0,j=0;
     while(i<v1.size()-1&&i<v2.size()-1)
     {
        string s1=version1.substr(v1[i]+1,v1[i+1]-v1[i]-1);
        string s2=version2.substr(v2[i]+1,v2[i+1]-v2[i]-1);
        int n1=stoi(s1);
        int n2=stoi(s2);
        if(n1<n2)
        return -1;
        if(n1>n2)
        return 1;
        i++;
     }
     while(i<v1.size()-1)
     {
        string s1=version1.substr(v1[i]+1,v1[i+1]-v1[i]-1);
        int n1=stoi(s1);
        int n2=0;
         if(n1<n2)
        return -1;
        if(n1>n2)
        return 1;
        i++;
     }
      while(i<v2.size()-1)
     {
        string s2=version2.substr(v2[i]+1,v2[i+1]-v2[i]-1);
        int n2=stoi(s2);
        int n1=0;
         if(n1<n2)
        return -1;
        if(n1>n2)
        return 1;
        i++;
     }
     return 0;

    }
};