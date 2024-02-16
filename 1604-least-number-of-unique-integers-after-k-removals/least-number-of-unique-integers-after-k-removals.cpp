class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        for(auto it:v) cout<<it.first<<" "<<it.second<<endl;
        int c=0;
        for(auto it:v)
        {
            if(k>=it.first)
            {
                k=k-it.first;
                it.first=0;
                c++;
            }
            if(k<=0) break;
        }
        return v.size()-c;
        // for(auto it:v)
        // {
        //     if(it.second)
        // }
    }
};