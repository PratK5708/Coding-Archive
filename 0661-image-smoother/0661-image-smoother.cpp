class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>> result(m,vector<int>(n,0));

        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                int sum=0; 
                int count=0;

                for (int a= max(0,i-1);a<= min(m - 1, i + 1);a++){
                    for (int b=max(0,j-1);b<=min(n-1,j+1);b++){
                        sum+=img[a][b];
                        count++;
                    }
                }

                result[i][j]=sum/count;
            }
        }

        return result;
    }
};