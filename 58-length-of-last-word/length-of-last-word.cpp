class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0,x=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==' ' and x==1) break;
            if(s[i]!=' ')
            {
                c++;
                x=1;
            }
        }
        return c;
    }
};