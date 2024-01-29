//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void f(int i,int n,vector<int>& v,map<int,int>& m)
    {
        if(i>n) return;
        int s=v[i-1]-i;
        // if(s>0)
        // {
        //     m[s]++;
        // }
        if(s>0 and m[s]==0)
        {
            v.push_back(v[i-1]-i);
            m[v[i-1]-i]++;
            f(i+1,n,v,m);
        }
        else
        {
            v.push_back(v[i-1]+i);
            m[v[i-1]+i]++;
            f(i+1,n,v,m);
        }
    }
    
    vector<int> recamanSequence(int n){
        // code here
        vector<int>v;
        v.push_back(0);
        map<int,int>m;
        f(1,n,v,m);
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends