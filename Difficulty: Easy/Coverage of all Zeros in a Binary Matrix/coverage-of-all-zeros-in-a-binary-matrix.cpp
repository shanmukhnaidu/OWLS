//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& m) {
        // Code here
        int c=0;
        int n=m.size();
        int nn=m[0].size();
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[i].size();j++)
            {
                if(m[i][j]==0)
                {
                   if(i+1<n) c+=m[i+1][j];
                   if(i-1>=0)c+=m[i-1][j];
                   if(j+1<nn) c+=m[i][j+1];
                   if(j-1>=0) c+=m[i][j-1];
                }
            }
        }
        return c;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends