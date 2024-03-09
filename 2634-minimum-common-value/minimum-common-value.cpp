class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // map<long long,long long>mp;
        // vector<long long>v;
        // for(auto it:nums1)
        // {
        //     mp[it]++;
        // }
        // for(auto it:nums2)
        // {
        //     if(mp[it]>0) v.push_back(it);
        // }
        // sort(v.begin(),v.end());
        // return v[0];
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        while(i<nums1.size() and j<nums2.size())
        {
            if(nums1[i]==nums2[j]) return nums1[i];
            if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        return -1;
    }
};