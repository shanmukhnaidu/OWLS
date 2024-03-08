class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        int max=-1;
        int c=0;
        for(auto it:mp)
        {
            if(it.second>max)max=it.second;
        }
        for(auto it:nums)
        {
            if(mp[it]==max) c++;
        }
        return c;
    }
};