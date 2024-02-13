class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto it:words)
        {
            string x=it;
            reverse(x.begin(),x.end());
            if(x==it) return it;
        }
        return "";
    }
};