class Solution {
public:
    int countSubstrings(string s) {
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            string ss="";
            int p=i;
            for(int j=i;j<s.size();j++)
            {
                ss=ss+s[j];
                string v=ss;
                reverse(v.begin(),v.end());
                if(v==ss) c++;
            }
        }
        return c;
    }
};