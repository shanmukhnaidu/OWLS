class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        // int x=(n*(n+1))/2;
        int d=0;
        int s=0;
        for(int i=1;i<=n;i++)
        {
            d=d^i;
        }
        // int s=0;
        for(auto it:nums)
        {
            s=s^it;
        }
        return s^d;
    }
};