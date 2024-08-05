class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(auto it:arr)
        {
            mp[it]++;
        }
        int c=0;
        vector<string>v;
        for(auto it:mp)
        {
            if(it.second==1)v.push_back(it.first);
        }
        if(v.size()<k)return "";
        else
        {
            for(auto it:arr)
            {
                if(mp[it]==1)c++;
                if(mp[it]==1 and c==k)return it;
            }
        }
        return "";
    }
};