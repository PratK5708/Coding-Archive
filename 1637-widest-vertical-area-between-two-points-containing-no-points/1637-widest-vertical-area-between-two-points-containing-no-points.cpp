class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        set<int> x;
        int res=0;

        for (int i=0;i<points.size();++i){
            x.insert(points[i][0]);
        }
            
        
        
        
        
        
        for (auto it=next(x.begin()); it != x.end(); it++)
            res=max(res, *it - *prev(it));

        return res;
    }
};