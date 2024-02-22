class Solution {
public:
    int findJudge(int n, vector<vector<int>>& v) {
        map<int,int>mp;
        if(n==1 and v.size()==0) return 1;
        for(int i=0;i<v.size();i++)
        {
            mp[v[i][1]]++;
        }
        set<int>st;
        for(int i=0;i<v.size();i++) st.insert(v[i][0]);
        for(auto it:mp)
        {
            if(it.second==(n-1) and st.find(it.first)==st.end()) return it.first;
        }
        for(auto it:st) cout<<it<<" ";
        return -1;
    }
};