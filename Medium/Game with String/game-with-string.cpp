//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        int ss=0;
        map<char,int>mp;
        priority_queue<int>q;
        for(auto it:s)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
            q.push(it.second);
        }
        while(k!=0)
        {
            int top=q.top();
            q.pop();
            q.push(top-1);
            k--;
        }
        while(!q.empty())
        {
            int t=q.top();
            int c=t*t;
            ss+=c;
            q.pop();
        }
        return ss;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends