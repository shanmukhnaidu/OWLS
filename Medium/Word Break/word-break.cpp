//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    int F(int ind,string &s,map<string,int>&mp)
    {
        if(ind==s.size()) return 1;
        int c=0;
        string ss="";
        for(int i=ind;i<s.size();i++)
        {
            ss+=s[i];
            if(mp.find(ss)!=mp.end())
            {
                c=max(c,F(i+1,s,mp));
            }
        }
        return c;
    }

    int wordBreak(int n, string s, vector<string> &d) {
      map<string,int>mp;
      for(auto it:d)mp[it]++;
      int ans=F(0,s,mp);
      return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends