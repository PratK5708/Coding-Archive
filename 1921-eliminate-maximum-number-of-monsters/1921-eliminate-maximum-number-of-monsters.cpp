class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        vector<int> time(n);
        
        for(int i=0;i<n;i++){
            time[i]=(dist[i]+speed[i]-1)/speed[i];
        }
        
        sort(time.begin(),time.end());
        
        int count=0;
        for(int i=0;i<n;i++){
            if(i>=time[i]){ 
                return count;
            }
            count++;
        }
        
        return count;
    }
};
