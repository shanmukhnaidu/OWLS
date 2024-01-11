//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
    // int prime(int n)
    //     {
    //         if(n==1)
    //         {
    //             return false;
    //         }
    //         for(int i=2;i*i<=n;i++)
    //         {
    //             if(n%i==0) return false;
    //         }
    //         return true;
    //     }
public: 
    long long int largestPrimeFactor(int N){
        // code here
        // vector<int>p(N+1,1);
        // p[0]=0;
        // p[1]=0;
        // for(int i=2;i*i<=N;i++)
        // {
        //     if(p[i]==1)
        //     {
        //         for(int j=i*i;j<=N;j=j+i)
        //         {
        //             p[j]=0;
        //         }
        //     }
        // }
        // if(p[N]==1) return N;
        // for(int i=N;i>=2;i--)
        // {
        //     if(p[i] and N%i==0) return i;
        // }
              long long int maxPrime = -1;
        while (N%2==0) {
            maxPrime = 2;
            N/=2;
        }
        for (int i=3; i<int(sqrt(N))+1;i+=2) {
            while (N % i == 0){
                maxPrime = i;
                N/=i;
            }
        }
      return N > 2 ? N :maxPrime;

    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends