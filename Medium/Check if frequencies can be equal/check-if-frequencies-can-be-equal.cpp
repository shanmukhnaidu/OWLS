//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    map<char,int>mp;
	    map<int,int>mpp;
	    for(auto it:s)
	    {
	        mp[it]++;
	    }
	    for(auto it:mp)
	    {
	        mpp[it.second]++;
	    }
	    int maxx=-1;
	    for(auto it:mpp)
	    {
	        if(it.second>maxx) maxx=it.first;
	    }
	    int c=0;
	   // cout<<maxx<<endl;
	    for(auto it:mp)
	    {
	        if(it.second!=maxx)
	        {
	            c++;
	            if((it.second-1==maxx and c==1) or (it.second-1==0 and c==1)) continue;
	            else return 0;
	        }
	    }
        return 1;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends