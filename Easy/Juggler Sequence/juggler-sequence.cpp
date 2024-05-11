//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void ans(vector<int>&v,int n)
    {
        if(n==1) return;
        else
        {
            int aa;
            if(n%2==0) aa=floor(sqrt(n));
            else aa=floor(pow(n,1.5));
            v.push_back(aa);
            ans(v,aa);
        }
    }
    vector<int> jugglerSequence(int n) {
        // code here
        vector<int>v;
        v.push_back(n);
        ans(v,n);
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<int> ans = ob.jugglerSequence(n);
        for (int u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends