//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string se) {
        // code here
        vector<long long>v;
        for(int i=0;i<se.length();i++)
        {
            int c=0;
            string s;
            while(i<se.length() and se[i]>='0' and se[i]<='9')
            {
                if(se[i]=='9') c++;
                s+=se[i];
                i++;
            }
            if(c==0 and !s.empty())
            {
                long long x=stol(s);
                v.push_back(x);
            }
        }
        if(v.size()==0)return -1;
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        return v[0];
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends