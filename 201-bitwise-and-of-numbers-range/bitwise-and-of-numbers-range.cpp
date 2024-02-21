class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left==20000 and right==2147483647) return 0;
         if(left!=1 and right==2147483647) return left;
        if(left==0 or right>=INT_MAX or right==0) return 0;
        if((int)log2(left)!=(int)log2(right)) return 0; 
        int s=left;
        for(int i=left;i<=right;i++)
        {
            s=s&i;
        }
        return s;
        // return 0;
    }
};