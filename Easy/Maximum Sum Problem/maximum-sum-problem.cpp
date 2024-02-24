//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    int F(int n)
    {
        if(n<=1) return n;
        return max((F(n/2)+F(n/3)+F(n/4)),n);
    }
    public:
        int maxSum(int n)
        {
            //code here.
            return F(n);
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends