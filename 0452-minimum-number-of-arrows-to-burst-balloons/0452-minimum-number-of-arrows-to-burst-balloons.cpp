class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int a=1;
        int b=points[0][1];

        sort(points.begin(),points.end());

        for(int i=0;i<points.size();i++){
            if(points[i][0]>b){
                a++;
                b=points[i][1];
            }
            
            else{
                b=min(b,points[i][1]);
            }
        }
        return a;
    }
};