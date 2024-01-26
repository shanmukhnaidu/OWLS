//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    vector<string>v;
    void f(string S,vector<int> &frq,string ans)
    {
        if(ans.length()==S.length())
        {
            if(find(v.begin(),v.end(),ans)==v.end())
            {
                 v.push_back(ans);
                 return;
            }
        }
        for(int i=0;i<S.length();i++)
        {
            if(frq[i]==0)
            {
                frq[i]=1;
                f(S,frq,ans+S[i]);
                frq[i]=0;
            }
        }
    }
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    int n=S.length();
		    vector<int>frq(n,0);
		    f(S,frq,"");
		    return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends