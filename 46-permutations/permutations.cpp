class Solution {
public:
    void F(int ind,int n,vector<int>&nums,vector<vector<int>> &v1)
    {
        if(ind==n){
            v1.push_back(nums);
            return;
        } 
        for(int i=ind;i<n;i++)
        {
            swap(nums[ind],nums[i]);
            F(ind+1,n,nums,v1);
            swap(nums[ind],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>v1;
       int n=nums.size();
       F(0,n,nums,v1);
       return v1;
    }
};