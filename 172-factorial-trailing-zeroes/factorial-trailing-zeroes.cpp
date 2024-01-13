class Solution {
public:
    int trailingZeroes(int n) {int a=0;
       while(n>=5)
       {
           
           int q=n/5;
           n=n/5;
           a=a+q;
       }return a;
    }
};