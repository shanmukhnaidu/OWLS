class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int>v,v1;
        for(int i=0;i<version1.size();i++)
        {
            string s;
            while(version1[i]!='.' and i<version1.size())
            {
                s+=version1[i];
                i++;
            }
            v.push_back(stoi(s));
        }
        for(int i=0;i<version2.size();i++)
        {
            string s;
            while(version2[i]!='.' and i<version2.size())
            {
                s+=version2[i];
                i++;
            }
            v1.push_back(stoi(s));
        }
        for(auto it:v)cout<<it<<" ";
        cout<<endl;
        for(auto it:v1)cout<<it<<" ";
        int n;
        if(v.size()>=v1.size())
        {
            n=v.size();
        }
        else n=v1.size();
        cout<<n<<"HI";
        for(int i=0;i<n;i++)
        {
            int xx;
            if(i<v.size())
            {
                xx=v[i];
            }
            else xx=0;
            int yy;
            if(i<v1.size())
            {
                yy=v1[i];
            }
            else yy=0;
            if(xx<yy) return -1;
            if(xx>yy) return 1;
        }
        return 0;
    }
};