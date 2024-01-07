//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        int x=__builtin_popcount(N);
        int c=0;
        int p=0;
        if(x==0 or x>1)
        {
            p=1;
        }
        else
        {
            while(N!=0)
            {
                    if((N&1)==0)
            {
                c++;
            }
            N=N>>1;
            }
        }
        if(p==0)
        {
            return c+1;
        }
        return -1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends