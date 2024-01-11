//{ Driver Code Starts


// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
    bool prime(int n)
    {
        if(n==1) return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)return false;
        }
        return true;
    }
  public:
    int primeSetBits(int L, int R){
        // code here
        int c=0;
        for(int i=L;i<=R;i++)
        {
            int x=0;
            x=__builtin_popcount(i);
            if(prime(__builtin_popcount(i))) c++;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout<<ob.primeSetBits(L,R)<<endl;
    }
    return 0;
}

// } Driver Code Ends