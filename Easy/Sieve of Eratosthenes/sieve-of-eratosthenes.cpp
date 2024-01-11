//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int>primes(N+1,1);
        primes[0]=0;
        primes[1]=0;
        for(int i=2;i*i<=N;i++)
        {
            if(primes[i]==1)
            {
                for(int j=i*i;j<=N;j=j+i)
                {
                    primes[j]=0;
                }
            }
        }
        vector<int>v;
        for(int i=1;i<=N;i++)
        {
            if(primes[i]==1)
            {
                v.push_back(i);
            }
        }
        return v;
        
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
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends