class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>v;
        for(auto it:score)
        {
            v.push_back(it);
        }
        sort(v.begin(),v.end());
        map<int,string>mp;
        int n=v.size();
        int a=0;
        if(n>=1)
        {
            mp[v[n-1]]="Gold Medal";
            a++;
        }
        if(n>=2)
        {
            mp[v[n-2]]="Silver Medal";
            a++;
        }
        if(n>=3) 
        {
            mp[v[n-3]]="Bronze Medal";
            a++;
        }
        int x=n;
        for(int i=0;i<n-a;i++)
        {
            mp[v[i]]=to_string(x);
            x--;
        }
        for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
        vector<string>s;
        for(auto it:score)
        {
            s.push_back(mp[it]);
        }
        return s;
    }
};