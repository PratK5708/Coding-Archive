class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for (int i=0;i<nums.size();i++){
            int num=nums[i];
            int numD=0;
            while (num>0){
                num/=10;
                numD++;
            }

            if (numD % 2==0){
                count++;
            }
        }

        return count;
    }
};