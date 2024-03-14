class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int len=nums.size();
        int sum,res=0;

        for(int i=0;i<len;i++){
            sum=0;
            for(int j=i;j<len;j++){
                sum+=nums[j];
                if(sum==goal)
                    res++;
                else if(sum>goal)
                    break;
            }

            if(sum<goal)
                break;
        }
        return res;   
    }
};

