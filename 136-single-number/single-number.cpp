class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x;
        for(int i=0;i<nums.size();i++)
        {
            int c=0;
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j)
                {
                if(nums[i]==nums[j])
                {
                    c=1;
                }
                }
            }
            if(c==0)
            {
                x=nums[i];
        }
        }
        return x;
    }
};