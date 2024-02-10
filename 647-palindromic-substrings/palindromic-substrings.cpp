class Solution {
public:
    int countSubstrings(string s) {
        int c=0;
        string v;
        for(int i=0;i<s.size();i++)
        {
            string ss="";
            for(int j=i;j<s.size();j++)
            {
                ss=ss+s[j];
                 v=ss;
                reverse(v.begin(),v.end());
                if(v==ss) c++;
            }
        }
        return c;
    }
};