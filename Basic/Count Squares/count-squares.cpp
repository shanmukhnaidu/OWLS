//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
        // code here
        // int c=0;
        // for(int i=1;i<N;i++)
        // {
        //     for(int j=1;j<=sqrt(i);j++)
        //     {
        //         if(j*j==i)
        //         {
        //             c++;
        //         }
        //     }
        // }
        // return c;
          int a=sqrt(N);
        if(a*a==N){
             return a-1; 
        }
        
            return a;
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
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends