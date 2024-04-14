class Solution {
public:
     const int n = 101;
    vector<int>arr;
    Solution() : arr(n, 1) {
        arr[0]=0;
        arr[1] = 0;
        arr[2] = 1;
        seive();
    }
    void seive()
    {
        for(long long i=2;i<n;i++)
        {
            if(arr[i]==1)
            {
                for(long long j=i*i;j<n;j=j+i)
                {
                    arr[j]=0;
                }
            }
        }
    }
    int maximumPrimeDifference(vector<int>& nums) {
        seive();
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            if(arr[nums[i]] and arr[nums[j]]) return j-i;
            if(arr[nums[i]]) j--;
            else if(arr[nums[j]]) i++;
            else
            {
                i++;
                j--;
            }
        }
         return 0;
    }
};