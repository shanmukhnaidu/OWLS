//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        int n=x.length();
        if(n%2!=0)return false;
        stack<char>st;
        // int nn=n/2;
        // for(int i=0;i<nn;i++)
        // {
        //     st.push(x[i]);
        // }
        // vector<char>v;
        // while(!st.empty())
        // {
        //     char z=st.top();
        //     v.push_back(z);
        //     st.pop();
        // }
        // for(auto it:v)cout<<it<<" ";
        // // reverse(v.begin(),v.end());
        // int j=0;
        // for(int i=nn;i<n;i++)
        // {
        //     if(x[i]!=v[j])return false;
        //     j++;
        // }
        // return true;
        st.push(x[0]);
        // cout<<st.top();
        for(int i=1;i<n;i++)
        {
            if(!st.empty())
            {
                if(st.top()=='(' && x[i]==')' ||st.top()=='{' && x[i]=='}' || st.top()=='[' && x[i]==']')st.pop();
                else st.push(x[i]);
                
            }
            else st.push(x[i]);
        }
        if(st.empty())return true;
        else return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends