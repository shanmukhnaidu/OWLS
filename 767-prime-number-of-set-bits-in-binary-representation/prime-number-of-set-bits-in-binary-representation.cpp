class Solution {
public:
bool prime(int n)
        {
            int z=0;
            for(int i=1;i<=n;i++)
                {
                if(n%i==0)
                {
                    z++;
                }
                }
                if(z!=2)
                {
                    return false;
                }
                return true;
        }
    int countPrimeSetBits(int left, int right) {
        int c=0;
        for(int i=left;i<=right;i++)
        {
            int x=__builtin_popcount(i);
            if(prime(x)) c++;
        }
        return c;
    }
};