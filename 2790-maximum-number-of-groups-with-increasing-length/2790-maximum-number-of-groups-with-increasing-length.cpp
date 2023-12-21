class Solution {
public:
    int maxIncreasingGroups(vector<int>& usageLimits) {
//         sort(usageLimits.rbegin(),usageLimits.rend());
//         int groups=0;

//         while (!usageLimits.empty()){
//             int limit=usageLimits.front();
//             usageLimits.erase(usageLimits.begin());
//             int remaining=limit-1;

//             if (remaining>0){
//                 groups += 1;
//                 usageLimits.insert(usageLimits.begin(), remaining);
//             } 
            
            
            
            
//             else {
//                 groups += 1;
//             }
//         }

//         return groups;
        
        
        
            sort(usageLimits.begin(), usageLimits.end());

            long long total = 0;
            int count = 0;

            for (int i = 0; i < usageLimits.size(); i++) {
                total += usageLimits[i];
                if (total >= ((count + 1LL) * (count + 2LL)) / 2LL) { 
                    count++;
                }
            }

            return count;
    }
};