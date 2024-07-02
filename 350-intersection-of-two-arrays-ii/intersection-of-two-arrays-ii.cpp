class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       map<int,int>mp1,mp2;
       vector<int>v;
       for(auto it:nums1)mp1[it]++;
       for(auto it:nums2)mp2[it]++;
       if(nums1.size()>nums2.size())
       {
            for(auto it:nums2)
            {
                if(mp1[it]>0)
                {
                    v.push_back(it);
                    mp1[it]--;
                }
            }
       }
       else
       {
            for(auto it:nums1)
            {
                if(mp2[it]>0)
                {
                    v.push_back(it);
                    mp2[it]--;
                }
            }
       }
       return v;
    }
};