//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
        bool check_prime(int n){

     int i =2;

     while(i*i<=n){

         if(n%i==0){

             return false;

         }

         i++;

     }

     return true;

 }

    vector<int> threeDivisors(vector<long long> query, int q)

    {

        // Write your code here

        vector<int> ans;

        int i=0;

        while(i<q){

            int count=0;

            int j =2;

            while(j*j<=query[i]){

            if(check_prime(j)){

                

                    count++;

            }

            j++;

        }

            ans.push_back(count);

            

            i++;

        }

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends