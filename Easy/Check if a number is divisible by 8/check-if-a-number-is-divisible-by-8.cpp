//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        int n=s.length();
        if(n==1 and s[0]=='8')return 1;
        if(n==1 and s[0]!='8')return -1;
        if(n==2)
        {
            int d=stoi(s);
            if(d%8==0) return 1;
            else return -1;
        }
        char x=(s[n-3]);
        char y=s[n-2];
        char z=s[n-1];
        string v;
        v+=x;
        v+=y;
        v+=z;
        int a=stoi(v);
        if(a%8==0) return 1;
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends