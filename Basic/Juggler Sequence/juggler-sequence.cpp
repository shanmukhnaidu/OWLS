//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void jugglerSequencee(int N,vector<int>&v)
    {
        if(N==1) 
        {
            return;
        }
        if(N%2==0){
            int x=floor(sqrt(N));
            v.push_back(x);
            jugglerSequencee(x,v);
        }
        else {
            int x=floor(pow(N,1.5));
            v.push_back(x);
            jugglerSequencee(x,v);
        }
    }
    
    vector<int> jugglerSequence(int N){
        // code here
        vector<int>v;
        v.push_back(N);
        jugglerSequencee(N,v);
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends