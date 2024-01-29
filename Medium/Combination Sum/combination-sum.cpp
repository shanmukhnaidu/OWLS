//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
    void combinationSum(int i,vector<int>& A,vector<int> &v,int s,vector<vector<int>> &v2)
{
    if(i==A.size())
    {
        if(s==0)
        {
            // sort(v.begin(),v.end());
            v2.push_back(v);
        }
        return;
    }
    if(A[i]<=s)
    {
        v.push_back(A[i]);
       
        combinationSum(i,A,v,s-A[i],v2);
    
        v.pop_back();
    }
    combinationSum(i+1,A,v,s,v2);
}
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        // int n=A.size();
         vector<int>v;
         vector<vector<int>>v2;
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(),A.end()),A.end());
        
        combinationSum(0,A,v,B,v2);
        return v2;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends