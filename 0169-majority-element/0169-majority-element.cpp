class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int temp=0;
        // int tcount=0;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i-1]==nums[i]){
        //         temp++;
        //     }
        //     else{
        //         if(temp>tcount){
        //             tcount=temp;
        //             temp=0;
        //         }
        //     }
        // }
        // return temp;
        int majorityElement = nums[0];
        int count = 1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == majorityElement) {
                count++;
            } else {
                count--;

                if (count == 0) {
                    majorityElement = nums[i];
                    count = 1;
                }
            }
        }

        return majorityElement;
    }
};