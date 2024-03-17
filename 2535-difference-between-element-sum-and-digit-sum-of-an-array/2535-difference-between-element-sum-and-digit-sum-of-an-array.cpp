class Solution {
public:
    // int differenceOfSum(vector<int>& nums) {
    //     int sum=0;
    //     while(num>0){
    //         sum+=num % 10;
    //         num/=10;
    //     }
    //     return sum;
    // }
    
    
    int digitSum(int num) {
        int sum = 0;
        while(num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0, digitSumTotal = 0;
        
        for(int num : nums) {
            elementSum += num;
            digitSumTotal += digitSum(num);
        }
        return abs(elementSum - digitSumTotal);
    }
};