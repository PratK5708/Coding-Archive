class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int maxp=0;
        int temp=0;
        vector<int>vec;
        for(int i=0;i<seq.size();i++){
            if (seq[i]=='('){
                temp++;
                maxp=max(maxp,temp);
                vec.push_back(temp%2);
            } 
            else{
                vec.push_back(temp%2);
                temp--;
            }
        }
        
        return vec;
    }
};