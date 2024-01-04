class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int i=0;i<nums.size();i++){
            int a=nums[i];
            if (count.find(a)==count.end()){
                count[a]=1;
            } 
            else{
                count[a]++;
            }
        }
        // return count;
        
        
        int res = 0;
        for (unordered_map<int, int>::iterator it = count.begin(); it != count.end(); ++it) {
            int c = it->second;
            if (c == 1) return -1;
            res += (c + 2) / 3;
        }

        return res;
    }
};