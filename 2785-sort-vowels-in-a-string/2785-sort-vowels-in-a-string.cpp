class Solution {
public:
    string sortVowels(string s) {
         int temp=s.size();
        vector<char> vowel;
        vector<int> a;
        for(int i=0;i<temp;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] =='o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U') { 
                vowel.push_back(s[i]);
                a.push_back(i);
            }
        }
        sort(vowel.begin(),vowel.end());
        string final = s;
        for(int i=0;i<a.size();i++){
            final[a[i]] = vowel[i];
        }
        return final;
    }
};