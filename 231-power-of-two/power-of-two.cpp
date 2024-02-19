class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if()
        // int x=__builtin_popcount(n);
        // cout<<INT_MIN;
        if(n != 0  and n!=INT_MIN and (__builtin_popcount(n)==1)) return true;
        return false;
    }
};