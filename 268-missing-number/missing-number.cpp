class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int x=(n*(n+1))/2;
        int s=0;
        for(auto it:nums)
        {
            s+=it;
        }
        return x-s;
    }
};