class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int m=0;
        vector<int>v;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
            {
                m=nums[i];
                v.push_back(nums[i]);
            }
            }
            s=s+nums[i];
        }
        s=s+nums[n-1];
        int x=(n*(n+1))/2;
        int b=((x)-(s-m));
        v.push_back(b);
        return v;

    }
};