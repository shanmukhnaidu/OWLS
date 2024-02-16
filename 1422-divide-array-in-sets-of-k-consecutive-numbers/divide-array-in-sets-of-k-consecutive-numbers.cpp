class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k!=0) return false;
        int s=0;
        // sort(v.begin(),v.end());
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        // sort(mp.begin(),mp.end());
        for(auto it=mp.begin();it!=mp.end();)
        {
            if(it->second>0)
            {
                for(int i=0;i<k;i++)
                {
                    if(mp[it->first+i]>0) mp[it->first+i]--;
                    else return false;
                }
            }
            else it++;
        }
        return true;
    }
};