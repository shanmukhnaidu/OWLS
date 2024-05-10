class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        // map<double,pair<int,int>>mp;
        priority_queue<pair<double,pair<int,int>>,vector<pair<double,pair<int,int>>>,greater<>>q;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                q.push({(double)arr[i]/arr[j],{arr[i],arr[j]}});
            }
        }
        pair<int,int>ans;
        for(int i=0;i<k;i++)
        {
            ans=q.top().second;
            q.pop();
        }
        return {ans.first,ans.second};
    }
};