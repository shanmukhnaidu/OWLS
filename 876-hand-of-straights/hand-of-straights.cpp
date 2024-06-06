class Solution {
public:
    bool ss(vector<int>& hand,int size,int i,int n)
    {
        int next=hand[i]+1;
        int c=1;
        hand[i]=-1;
        i++;
        while(i<n and c<size)
        {
            if(hand[i]==next)
            {
                c++;
                next=hand[i]+1;
                hand[i]=-1;
            }
            i++;
        }
        return c==size;
    }
    bool isNStraightHand(vector<int>& hand, int size) {
        int n=hand.size();
        if(n%size!=0) return false;
        sort(hand.begin(),hand.end());
        for(int i=0;i<n;i++)
        {
            if(hand[i]>=0)
            {
                if(!ss(hand,size,i,n)) return false;
            }
        }
        return true;
    }
};