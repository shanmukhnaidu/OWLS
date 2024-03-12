class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        map<char,int>mp1;
        for(auto it:s)
        {
            mp[it]++;
        }
        string ans;
        for(auto it:order)
        {
            // int x=it.second;
            if(mp[it]>0) 
            {
                int x=mp[it];
                while(x--)
                {
                    ans+=it;
                }
            }
            mp1[it]++;
        }
        for(auto it:s)
        {
            if(mp1[it]==0) ans+=it;
        }
        return ans;
    }
};