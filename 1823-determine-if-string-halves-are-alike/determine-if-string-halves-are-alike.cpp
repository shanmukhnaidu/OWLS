class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        int c=0;
        int x=0;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U')
            {
                    c++;
            }
        }
        for(int i=n/2;i<n;i++)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U')
            {
                    x++;
            }
        }
        if(x==c) return true;
        return false;
    }
};