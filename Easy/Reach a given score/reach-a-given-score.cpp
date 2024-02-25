//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    // Complete this function
    int **dp;
    int F(int i,vector<int>&v,int s)
    {
        if (i == v.size()) 
        {
            if (s == 0) 
            {
                return 1;
            }
            return 0;
        }
        if(dp[i][s]!=-1) return dp[i][s];
        int ans = 0;
        if (v[i] <=s)
        {
            ans += F(i, v, s - v[i]);
        }
        ans += F(i + 1, v, s);
        return dp[i][s]=ans;
    }
    long long int count(long long int n)
    {
    	// Your code here
    	vector<int>v={3,5,10};
    	int maxSize = n + 1;
         dp = new int*[v.size()];
        for (int i = 0; i < v.size(); ++i) {
            dp[i] = new int[maxSize];
            memset(dp[i], -1, sizeof(int) * maxSize);
        }
    	return F(0,v,n);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends