//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long mod=1000000007;
    void F(long long n,long long i,long long p,long long &ans)
        {
            if(p>n) return;
            long long x=p;
            long long s=1;
            while(x--)
            {
                s=(s*i)%mod;
                i++;
            }
            ans+=s;
            F(n,i,p+1,ans);
        }

    long long sequence(int n){
        // code here
        long long ans=0;
        F(n,1,1,ans);
        return ans%mod;
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
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends