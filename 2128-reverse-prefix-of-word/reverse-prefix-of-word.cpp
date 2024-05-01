class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i;
        int c=0,d=-1;
        string s;
        string x;
        for( i=0;i<word.length();i++)
        {
            if(word[i]==ch and d==-1)
            {
                c=1;
                d++;
                if(d==0)s+=word[i];
            }
            else if(d==-1)s+=word[i];
            else x+=word[i];
        }
        reverse(s.begin(),s.end());
        if(c==1)return s+x;
        else return word;
    }
};