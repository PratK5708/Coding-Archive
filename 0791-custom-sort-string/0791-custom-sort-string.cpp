class Solution {
public:
    string customSortString(string order, string s) {
       
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        int arr[26] = {0};

        for(int i = 0; i < s.length(); i++) {
            arr[s[i] - 'a']++;
        }

        string ans;

        for(int i = 0; i < order.length(); i++) {
            char ch = order[i];
            if(arr[ch - 'a'] != 0) {
                ans.append(arr[ch - 'a'], ch);
                arr[ch - 'a'] = 0;
            }
        }

        for(int i = 0; i < 26; i++) {
            char ch = 'a' + i;
            ans.append(arr[i], ch);
        }

        return ans;
    }
};