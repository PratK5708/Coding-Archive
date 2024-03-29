class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> mp;
        
        for(int mid=1;mid<nums.size()-2;mid++){
            for(int first=0;first<mid;first++){ 
                ++mp[nums[first]+nums[mid]];
            }
            for(int last=mid+2;last<nums.size();last++){
                int slast=mid+1;
                ans+=mp[nums[last]-nums[slast]];
            }
        }
        return ans;
    }
};