class Solution {
public:
    // string finalString(string s) {
    //     for(int i=0;i<s.size();i++){
    //         if (s[i]=='i'){
    //             s=reverse(s);
    //         }
    //     }
    //     return s;
    // }
    
    string finalString(string s) {
        string result;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'i') {
                result = reverse(result);
            } else {
                result += s[i];
            }
        }
        return result;
    }

private:
    string reverse(string qw){
        string str;
        for (int i=qw.size()-1;i>=0;i--){
            str+=qw[i];
        }
        return str;
    }
};