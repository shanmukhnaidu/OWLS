class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size() % k != 0) return false;
        map<int,int>mpp;
        for(auto i : nums) mpp[i]++;
        for(auto it = mpp.begin(); it != mpp.end();){
            if(it->second > 0){
                for(int i =0; i < k; i++){
                    if(mpp[it->first+i] > 0)
                        mpp[it->first+i]--;
                    else return false;
                }
            }
            else it++;
        }
        return true;
        
    }
};