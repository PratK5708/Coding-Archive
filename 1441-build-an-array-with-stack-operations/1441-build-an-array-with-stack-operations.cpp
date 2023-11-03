class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> vec1;
        int temp=1;
        for (int num=0;num<target.size();num++){
            while (temp<target[num]){
                vec1.push_back("Push");
                vec1.push_back("Pop");
                temp++;
            }
            vec1.push_back("Push");
            temp++;
        }
        return vec1;
    }
};