class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            x=x^nums[i];
        }
        x=x^k;
        return __builtin_popcount(x);
        
    }
};