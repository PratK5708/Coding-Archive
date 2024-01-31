class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int sum=nums[0];
        for(i=1;i<n;i++){
            if(nums[i]!=nums[i-1]+1){
                break;
            }
            sum+=nums[i];
        }
        //return sum;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        sort(nums.begin() + i, nums.end());
        for(int j = i - 1; j < n; j++) {
            if(nums[j] == sum) sum++;
        }
        return sum;
    }
};