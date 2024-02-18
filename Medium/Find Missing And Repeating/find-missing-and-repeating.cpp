//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
     vector<int> findTwoElement(vector<int> arr, int n) {
         unordered_map<int,int>mp;
         int re;
         int s=0;
         for(auto it:arr)
         {
             mp[it]++;
             if(mp[it]>1)
             {
                 re=it;
                //  break;
             }
         }
         int i=1;
         int m=-1;
         while(i<=n)
         {
             if(mp.find(i)==mp.end())
             {
                 m=i;
                 break;
             }
             i++;
         }
         return{re,m};
         
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends