class Solution {
public:
    int averageValue(vector<int>& nums) 
    {
        int c=0;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0 and nums[i]%3==0)
            {
                s=s+nums[i];
                c+=1;
            }
        }    
        if(c!=0)
        {
            return int(s/c);
        }
        return 0;
    }
};