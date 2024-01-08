//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    string is_power_of_eight(long long int n ) 
    {
        // Code here.
        int c=0;
        while(n>0)
        {
            if((n&1)==1)
            {
                c++;
            }
            n=n>>1;
        }
        if(c==1)
        {
            return "Yes";
        }
        return "No";
    }
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int  n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_power_of_eight(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends