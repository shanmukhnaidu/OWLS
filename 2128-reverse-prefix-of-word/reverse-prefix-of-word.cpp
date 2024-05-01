class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i;
        int c=0;
        for( i=0;i<word.length();i++)
        {
            if(word[i]==ch)
            {
                c=1;
                break;
            }
            
        }
        if(c==0) return word;
        i++;
        reverse(word.begin(),word.begin()+i);
        return word;
    }
};