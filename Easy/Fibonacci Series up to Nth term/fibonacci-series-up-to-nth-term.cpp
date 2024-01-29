//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void f(int i,int n,vector<long long>& v)
    {
        if(i>n) return;
        else
        {
            v.push_back(v[i-1]+v[i-2]);
            f(i+1,n,v);
        }
    }
    vector<long long> Series(int N) {
        // COde here
        vector<long long>v;
        v.push_back(0);
        v.push_back(1);
        f(2,N,v);
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
        Solution obj;

        vector<long long> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends