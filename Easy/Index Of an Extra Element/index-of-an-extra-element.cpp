//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        int s=0,ss=0;
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            ss+=b[i];
        }
        int x=s-ss;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x) return i;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}
// } Driver Code Ends