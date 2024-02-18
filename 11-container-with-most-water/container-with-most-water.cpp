class Solution {
public:
    int maxArea(vector<int>& arr) {
        int maxx=-1;
        int i=0;
        int j=arr.size()-1;
        while(i!=j)
        {
            int ans=(j-i)*min(arr[i],arr[j]);
            if(arr[i]<arr[j]) i++;
            else j--;
            maxx=max(ans,maxx);
        }
        return maxx;
    }
};