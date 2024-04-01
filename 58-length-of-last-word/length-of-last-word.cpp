class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>v;
        for(int i=0;i<s.length();i++)
        {
            string ss;
            if(s[i]!=' ')
            {
                while(s[i]!=' ' and i<s.length())
                {
                    ss+=s[i];
                    i++;
                }
                v.push_back(ss);
            }
        }
        string x=v[v.size()-1];
        return x.length();
    }
};