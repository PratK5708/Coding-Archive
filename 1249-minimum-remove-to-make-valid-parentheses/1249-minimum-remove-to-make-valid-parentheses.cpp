class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=0;
        vector<int> vec;
    
    for (int i=0;i<s.size();i++){
        if (s[i]=='('){
            n++;
            vec.push_back(i);
        } 
        else if (s[i]==')'){
            if (n>0){
                n--;
                vec.pop_back();
            } 
            else{
                vec.push_back(i);
            }
        }
    }
    
    for (int i=vec.size()- 1;i>=0;i--){
        s.erase(vec[i],1);
    }
    return s;
    }
};