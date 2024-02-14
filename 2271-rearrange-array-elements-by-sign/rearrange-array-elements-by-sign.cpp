class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(auto it:nums)
        {
            if(it<0) neg.push_back(it);
            else pos.push_back(it);
        }
        vector<int>ans;
        int k=0;
        while(ans.size()!=nums.size())
        {
            ans.push_back(pos[k]);
            ans.push_back(neg[k]);
            k++;
        }
        return ans;

    }
};