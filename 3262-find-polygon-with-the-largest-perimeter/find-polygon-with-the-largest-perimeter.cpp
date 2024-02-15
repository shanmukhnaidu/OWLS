class Solution {
public:
    long long largestPerimeter(vector<int>& v) {
        vector<long long>prefix;
        long long ss=0;
        sort(v.begin(),v.end());
        for(auto it:v)
        {
            ss+=it;
            prefix.push_back(ss);
        }
        
        long long n=v.size();
        if(n<3) return -1;
        // else if(n==3)
        // {
        //     if(v[0]+v[1]>v[2]) return v[0]+v[1]+v[2];
        //     else return -1;
        // }
        else
        {
            // for(auto it:prefix) cout<<it<<" ";
            for(int i=n-1;i>=1;i--)
            {
                int z=(prefix[i]-prefix[i-1]);
                if(prefix[i-1]>z) return prefix[i];
            }
        }
        return -1;
    }
};