class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v;
        for(auto it:nums)
        {
            mp[it]++;
        }
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        for(auto it:nums)
        {
            if(it<0) return -1;
            if(mp[(-1*it)]) return it;
        }
        return -1;
    }
};