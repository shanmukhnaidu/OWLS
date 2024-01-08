class Solution {
public:
long long binary(int n)
        {
            long long s=0;
            for(int i=0;i<32;i++)
            {
                if((n&1)==1)
                {
                    s+=pow(2,i);
                }
                n=n>>1;
            }
            return s;
        }
    int getSum(int a, int b) {
        return binary(a)+binary(b);
    }
};