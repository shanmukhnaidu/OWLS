class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>1)
            {
                return it.first;
            }
        }
        int z=0;
            for(int i=1;i<=n;i++)
                {
                if(n%i==0)
                {
                    z++;
                }
                }
                if(z!=2)
                {
                    return false;
                }
                return true;
    }
};