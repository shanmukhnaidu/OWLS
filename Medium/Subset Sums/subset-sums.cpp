//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void f(int i,vector<int> &v,vector<int> &arr,vector<int> &s)
    {
        if(i==arr.size())
        {
            int ss=0;
            for(auto it:v)
            {
                ss=ss+it;
            }
            s.push_back(ss);
            return;
        }
        v.push_back(arr[i]);
        f(i+1,v,arr,s);
        v.pop_back();
        f(i+1,v,arr,s);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>v;
        vector<int>s;
        f(0,v,arr,s);
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends