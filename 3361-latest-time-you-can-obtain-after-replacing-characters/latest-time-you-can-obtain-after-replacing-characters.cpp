class Solution {
public:
    string findLatestTime(string s) {
        if(s[0]=='0' and s[1]=='?')
        {
            s[1]='9';
        }
        else if(s[0]=='?' and s[1]=='0')
        {
            s[0]='1';
        }
        else if(s[0]=='?' and s[1]!='1' and s[1]!='0' and s[1]!='?')
        {
            s[0]='0';
        }
        else if(s[0]=='?' and s[1]=='1' and s[1]=='0')
        {
            s[0]='1';
        }
        else if(s[0]=='1' and s[1]=='?')
        {
            s[1]='1';
        }
        else if(s[0]=='?' and s[1]==0)
        {
            s[0]='1';
        }
        else if(s[0]=='?' and s[1]=='1') s[0]='1';
        else if(s[0]=='?' and s[1]=='?')
        {
            s[0]='1';
            s[1]='1';
        }
        if(s[3]=='?' and s[4]=='?')
        {
            s[3]='5';
            s[4]='9';
        }
        if(s[3]=='?' and s[4]!='?') s[3]='5';
        if(s[3]!='?' and s[4]=='?') s[4]='9';
        return s;
    }
};