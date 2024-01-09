//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code hee.
             vector <int> indexes;
            
            int m=pat.length();
            int n=txt.length();
            
            for(int i=0;i<=n-m;i++){
                int j;
                for(j=0;j<m;j++){
                    if(txt[i+j]!=pat[j]){
                        break;
                    }
                }
                if(j==m){
                    indexes.push_back(i+1);
                }
            }
            if(indexes.empty()){
                indexes.push_back(-1);
            }
            
            return indexes;
    // if(h>0)
    // {
    //     return h;
    // }
    // return -1;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i];
    // }
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends