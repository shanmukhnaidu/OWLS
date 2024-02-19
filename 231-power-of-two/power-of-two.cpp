class Solution {
public:
    bool isPowerOfTwo(int n) {
        // int x=__builtin_popcount(n);
        if(n != 0  and n!=INT_MIN and (n&(n-1)) == 0) return true;
        return false;
    }
};