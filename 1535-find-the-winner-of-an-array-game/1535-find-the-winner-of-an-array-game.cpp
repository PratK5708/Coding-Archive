class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int wins=0;
        int bigno=arr[0];
        
        for (int i=1;i<arr.size();i++){
            if (arr[i]>bigno){
                bigno=arr[i];
                wins=1;
            } 
            
            else{
                wins++;
            }
            
            if (wins==k){
                return bigno;
            }
        }
        
        return bigno;
    }
    
    
//     int getWinner(vector<int>& arr, int k) {
//         for (int i=0;i<arr.size();i++){
//             if(arr{0} < arr{1}){
//                 int temp=arr{0};
//                 arr.erase(0);
//                 arr.push_back(temp);
//             }
//             else if (arr{0}>arr{1}){
//                 int temp=arr{1};
//                 arr.erase(1);
//                 arr.push_back(temp);
//             }
//         }
        
//     }
};
