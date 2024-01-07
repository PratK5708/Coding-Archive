class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        vector<unordered_map<long long,long long>>vec(n);
        int ans=0;
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                int seq=0;
                long long diff =(long long)nums[i]-(long long)nums[j];
                if(diff<=INT_MIN || diff>=INT_MAX) continue;
                if(vec[j].find(diff)!=vec[j].end()){
                    seq = vec[j][diff];
                }
                ans += seq;
                vec[i][diff] += (seq+1);
            }
        }
        return ans;
    }
};