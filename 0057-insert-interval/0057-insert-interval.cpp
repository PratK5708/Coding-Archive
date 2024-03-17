class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int size=intervals.size();
        for(int i=0;i<size;i++){
            if(intervals[i][0]>newInterval[0]){
                intervals.insert(intervals.begin()+i,newInterval);
                break;
            }
        }
        if(intervals.size()==size){
            intervals.push_back(newInterval);
        }
        size++; 
        vector<vector<int>>ans;
      
        int start=intervals[0][0],end=intervals[0][1];
        for(int i=1;i<size;i++){
            if(end<intervals[i][0]){
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
            else {
                end= max(end,intervals[i][1]);
            }
        }
       
        ans.push_back({start,end});
        return ans;
    }
};