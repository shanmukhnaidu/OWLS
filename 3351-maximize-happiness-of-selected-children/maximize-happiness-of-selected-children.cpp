class Solution {
public:
    long long maximumHappinessSum(vector<int>& happy, int k) {
        sort(happy.begin(),happy.end());
        reverse(happy.begin(),happy.end());
        long long ans=0;
        int x=1;
        // map<int,int>mp;
        for(int i=0;i<k;i++)
        {
           if(i==0)ans+=happy[i];
           else{
            int aa=happy[i]-x;
            if(aa>=0)ans+=happy[i]-x;
            x++;
           }
        }
        return ans;
    }
};