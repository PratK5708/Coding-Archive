class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // int res=0;
        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         int len=j-i+1;
        //         if(sum==len/2 && len%2==0){
        //             res=max(res,len);
        //         }
        //     }
        // }
        // return res;
        
        int n=nums.size();
        int res=0,diff=0;

        unordered_map<int,int>m;
        m[0]=-1;

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                diff++;
            }
            else{
                --diff;
            }
            
            if(m.find(diff)==m.end())
                m[diff]=i;
            else
                res=max(res,i-m[diff]);
        }

        return res;
    }
};