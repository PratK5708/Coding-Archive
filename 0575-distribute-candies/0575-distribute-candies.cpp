class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        bitset<200001> bit(0);
        int n = candyType.size();
        for(int i=0;i<n;++i)bit.set(candyType[i]+100000);
        n/=2;
        int count = bit.count();
        return min(n,count);
    }
};