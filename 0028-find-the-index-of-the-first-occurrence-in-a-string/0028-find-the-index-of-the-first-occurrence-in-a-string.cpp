class Solution {
public:
    int strStr(string haystack, string needle) {
        // char temp = needle[0];
        // for (int i = 0; i < haystack.length(); i++) {
        //     if (temp == haystack[i]) {
        //         return i;
        //      };
        //         return -1;
        // }

        int nlenghth=needle.length();
        int haylength=haystack.length();

        for (int i=0;i<=(haylength-nlenghth);++i){
            if (haystack.substr(i,nlenghth)==needle){
                return i;
            }
        }

        return -1;
    }
};
