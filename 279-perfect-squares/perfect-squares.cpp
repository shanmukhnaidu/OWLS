class Solution {
public:
    int dp[10001][101];
    long long F(int n,int x)
    {
        if(n==0) return 0;
        if(dp[n][x]!=-1) return dp[n][x];
        long long minn=INT_MAX;
        for(long long i=x;i>=1;i--)
        {
            if((i*i)<=n)
            {
                // sum=sum+(i*i);
                 long long l=1+F(n-(i*i),i);
                long long r=1+F(n,i-1);
                  minn=min(minn,min(r,l));
            }
        }
        dp[n][x]=minn;
        return minn;
    }

    int numSquares(int n) {
       long long x=sqrt(n);
       memset(dp,-1,sizeof(dp));
       long long z=F(n,x);
       return z;
    }
};