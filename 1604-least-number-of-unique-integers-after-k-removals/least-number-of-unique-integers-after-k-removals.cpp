class Solution {
public:
    static bool cpm(pair<int,int>a,pair<int,int>b)
    {
        return a.second<b.second;
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        // vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        // for(auto it:mp)
        // {
        //     v.push_back({it.second,it.first});
        // }
        vector<pair<int,int>>ans(mp.begin(),mp.end());
        sort(ans.begin(),ans.end(),cpm);
        // for(auto it:v) cout<<it.first<<" "<<it.second<<endl;
        int c=0;
        for(auto it:ans)
        {
            if(k>=it.second)
            {
                k=k-it.second;
                it.second=0;
                c++;
            }
            if(k<=0) break;
        }
        return ans.size()-c;
    }
};