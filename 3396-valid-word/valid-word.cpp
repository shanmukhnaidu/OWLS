class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3)return false;
        int c=0;
        int v=0;
        for(auto it:word)
        {
            if((it>='0' and it<='9') or (it>='a' and it<='z') or (it>='A' and it<='Z'))
            {
                if((it>='a' and it<='z') or (it>='A' and it<='Z'))
                {
                    if(it=='a' or it=='e' or it=='i' or it=='o' or it=='u' or it=='A' or it=='E' or it=='I' or it=='O' or it=='U')
                    {
                        c++;
                    }
                    else 
                    {
                        v++;
                    }
                }
            }
            else return false;
        }
        if(c!=0 and v!=0) return true;
        return false;
    }
};