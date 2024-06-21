class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();

        int maxSum=INT_MIN, satisfied_sum=0, minute_sum = 0, not_grumpy_sum = 0;

        for(int i=0;i<n;i++){

            if(grumpy[i] == 0){
                satisfied_sum += customers[i];
            }
        }

        int i = 0, j = 0;

        while(j < n){

            minute_sum += customers[j];
            if(grumpy[j] == 0){
                not_grumpy_sum += customers[j];
            }
            if(j < minutes - 1){
                j++;
                continue;
            }else{

                int curr_sum = satisfied_sum - not_grumpy_sum + minute_sum;

                maxSum = max(maxSum, curr_sum);

                minute_sum -= customers[i];
                if(grumpy[i] == 0){
                    not_grumpy_sum -= customers[i];
                }
                i++;
            }

            j++;
        }
    return maxSum;
    }
};