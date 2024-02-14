class Solution {
public:
    void solve(int ind,vector<int>&arr,int sum,vector<int>&ds,vector<vector<int>>&ans){
        if(sum<0) return ;
         if(sum==0){
                ans.push_back(ds);
                return ;
        }
        if(ind>=arr.size()){
            if(sum==0){
                ans.push_back(ds);
            }
            return ;
        }
        if(arr[ind]<=sum){
            ds.push_back(arr[ind]);
            solve(ind,arr,sum-arr[ind],ds,ans);
            ds.pop_back();
        }
        solve(ind+1,arr,sum,ds,ans);

    } 
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        int ind=0;
        solve(ind,arr,target,ds,ans);
        return ans;

    }
};