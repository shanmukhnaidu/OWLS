class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>m;
        map<char,int>mp;
        vector<int>v;
        vector<int>v1;
        for(auto it:word1)
        {
            m[it]++;
        }
        for(auto it:m) v.emplace_back(it.second);
        for(auto it:word2) 
        {
            mp[it]++;
        }
        for(auto it:mp) v1.emplace_back(it.second);
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        if(v!=v1) return false;
        else
        {
            for(auto it:m)
        {
            int p=0,x=0;
            for(auto i:mp)
            {
                if(it.first==i.first) p=1;
                if(it.second==i.second)x=1;
            }
            if(p==0 or x==0) return false;
        }
        }
        return true;
    }
};