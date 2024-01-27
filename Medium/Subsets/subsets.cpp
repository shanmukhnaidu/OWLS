//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    
    void f(int i,vector<int>& v,vector<int> &A,int n,vector<vector<int>>&v1)
    {
        if(i==n)
        {
            v1.push_back(v);
            return ;
        }
        v.push_back(A[i]);
        f(i+1,v,A,n,v1);
        v.pop_back();
        f(i+1,v,A,n,v1);
    }
    public:
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        int n=A.size();
        vector<int>v;
        vector<vector<int>>x;
        f(0,v,A,n,x);
        sort(x.begin(),x.end());
        return x;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends