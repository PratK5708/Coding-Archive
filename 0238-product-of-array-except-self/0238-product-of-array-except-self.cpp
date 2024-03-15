class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>numl(n,1);
        vector<int>numr(n,1);
        vector<int>res(n);
        numl[0]=1;
        for(int i=1;i<nums.size();i++){
            numl[i]=numl[i-1]*nums[i-1];
        }
        numr[n-1]=1;
        for(int i=n-2;i>=0;i--){
            numr[i]=numr[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            res[i]=numl[i]*numr[i];
        }
        return res;
    }
};