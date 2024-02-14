class Solution {
public:
    void F(vector<int>&candidates,int target,vector<vector<int>>&ans,long long sum,vector<int>&v,int i)
    {
        if(i>=candidates.size())
        {
            if(sum==target)
            {
                ans.push_back(v); 
                
            }
             return; 
        }
        if(sum<=target)
        {
            v.push_back(candidates[i]);
            sum+=candidates[i];
            F(candidates,target,ans,sum,v,i);
            v.pop_back();
            sum-=candidates[i];
            
        }
        F(candidates,target,ans,sum,v,i+1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        F(candidates,target,ans,0,v,0);
        return ans;
    }
};
