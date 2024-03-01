class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int z=0;
        int o=0;
        for(auto it:s)
        {
            if(it=='1') o++;
            else z++;
        }
        int n=s.length();
        string x=string(o-1,'1');
        string y=string(z,'0');
        // string ans=x+y;
        return x+y+'1';
    }
};