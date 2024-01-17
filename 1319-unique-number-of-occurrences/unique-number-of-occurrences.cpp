class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto it:m)
        {
            mp[it.second]++;
        }
        for(auto it:mp)
        {
            if(it.second>1) return false;
        }
        return true;

    }
};