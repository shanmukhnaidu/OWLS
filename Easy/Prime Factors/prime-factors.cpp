//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
   
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    vector<int> ans;
	    int prime = 0;
	    for(int i=2; i*i<=N; i++){
	        while(N%i == 0){
	            if(i != prime)
	                ans.push_back(i);
	            N /= i;
	            prime = i;
	        }
	    }
	    if(N>1) ans.push_back(N);
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends