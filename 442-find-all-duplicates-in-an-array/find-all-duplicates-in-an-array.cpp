class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
            if(mp[it]>1) v.push_back(it);
        }
        return v;
    }
};