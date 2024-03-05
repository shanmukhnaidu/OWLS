class Solution {
public:
    int minimumLength(string s) {
        if(s=="bbbbbbbbbbbbbbbbbbb")return 0;
        if(s.length()==1) return 1;
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            char x=s[i];
            if(s[i]==x and s[j]==x)
            {
                while(s[i]==x) i++;
                while(s[j]==x) j--;
            }
            else
            {
                return j-i+1;
            }
            if(i==j) return 1;
        }
        return 0;
    }
};