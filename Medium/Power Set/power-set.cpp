//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void F(int i,string s,vector<char>&v,vector<vector<char>>&v1,int n){
	        if(i==n)
	        {
	            v1.push_back(v);
	            return;
	        }
	        v.push_back(s[i]);
	        F(i+1,s,v,v1,n);
	        v.pop_back();
	        F(i+1,s,v,v1,n);
	        return;
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<char>v;
		    vector<vector<char>>v1;
		    vector<string>z;
		    int n=s.length();
		    F(0,s,v,v1,n);
		    for(int i=0;i<v1.size();i++)
		    {
		        string x;
		        for(int j=0;j<v1[i].size();j++)
		        {
		            if(int(v1[i][j])!=32) x=x+v1[i][j];
		        }
		        z.push_back(x);
		    }
		    vector<string>q;
		    sort(z.begin(),z.end());
		    for(int i=1;i<z.size();i++) q.push_back(z[i]);
		  //cout<<q[0]<<endl;
		    return q;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends