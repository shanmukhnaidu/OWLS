class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>m;
        map<int,int>mp;
        int x=0;
        int c=1;
        for(int i=0;i<matches.size();i++)
        {
            m[matches[i][x]]++;
            mp[matches[i][c]]++;
        }
        vector<vector<int>>result;
        vector<int>v;
        vector<int>v1;
        for(auto it:m)
        {
            // int p=0;
            // for(auto i:mp)
            // {
            //     if(it.first==i.first) p=1;
            // }
            // if(p==0)
            // {
            //     v.emplace_back(it.first);
            // }
            auto k = it.first;
            auto ip = mp.find(k);
            if(ip == mp.end()){
                v.push_back(k);

            }

        }
        for(auto it:mp)
        {
            if(it.second==1) v1.emplace_back(it.first);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        result.emplace_back(v);
        result.emplace_back(v1);
        return result;
    }
};