class Solution {
public:
    int countGoodSubstrings(string s) {
       if(s.length()<3) return 0;
       int c=0;
       for(int i=0;i<s.length()-2;i++)
       {
        if(s[i]!=s[i+1] and s[i+1]!=s[i+2] and s[i]!=s[i+2]) c++;
       }
       return c;
    }
};