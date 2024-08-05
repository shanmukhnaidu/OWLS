//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        map<char,int>mp;
        int p,c=0;
        for(auto it:s)
        {
            mp[it]++;
        }
        if(mp[ch]==0)return "";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==ch)c++;
            if(s[i]==ch and c==count)
            {
                p=i;
                break;
            }
        }
        string ans;
        if(p+1<s.length())
        {
            for(int i=p+1;i<s.length();i++)
            {
                ans+=s[i];
            }  
            return ans;
        }
        return "";
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends