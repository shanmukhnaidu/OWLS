//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(int arr[], int n, int k) {
	    // code here
	    int i,p=0;
	   // if(arr[0]==)
	    for(i=0;i<=n;i++)
	    {
	        if(arr[i]==k)
	        {
	            p=1;
	            break;
	        }
	    }
	    if(p==1)
	    {
	        return i+1;
	    }
	    return -1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, k;
        cin >> n >> k;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.search(a, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends