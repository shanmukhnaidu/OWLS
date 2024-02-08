class Solution {
public:
    void F(int n,vector<int>&nums,vector<int>&v,vector<vector<int>>&v1,int arr[])
    {
        if(v.size()==n)
        {
            v1.push_back(v);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(!arr[i])
            {
                v.push_back(nums[i]);
                arr[i]=1;
                F(n,nums,v,v1,arr);
                arr[i]=0;
                v.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=0;
        }
        vector<vector<int>>v1;
        F(n,nums,v,v1,arr);
        return v1;
    }
};