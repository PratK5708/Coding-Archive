class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count=0;
        int n=words.size();

        for(int i=0; i<n-1; i++){
            string s1=words[i];

            for(int j=i+1; j<n; j++){
                string s2=words[j];

                if(s1[0]==s2[1] and s1[1]==s2[0]) count++;   
            }
        }
        return count;
    }
};