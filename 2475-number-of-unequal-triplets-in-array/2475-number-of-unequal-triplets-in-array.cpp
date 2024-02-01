class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        unordered_map<int, int> map;
        for(auto p : nums)
            map[p]++;
        vector<int> vec;
        for(auto p : map)
            vec.push_back(p.second);
        long ans = 0;
        for(int i=0; i<vec.size(); i++)
            for(int j=i+1; j<vec.size(); j++)
                for(int k=j+1; k<vec.size(); k++)
                    ans += vec[i]*vec[j]*vec[k];        
        return ans;
    }
};