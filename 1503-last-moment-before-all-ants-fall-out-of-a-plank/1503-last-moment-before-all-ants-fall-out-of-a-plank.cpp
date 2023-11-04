class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int temp=0;
        int leftsize=left.size();
        int rightsize=right.size();
        for(int i=0;i<leftsize;i++){
            if(left[i]>temp){
                temp=left[i];
            }
        }
        for(int i=0;i<rightsize;i++){
            if(n-right[i]>temp){
                temp=n-right[i];
            }
        }
        return temp;
        
    }
};