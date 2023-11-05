class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int lp=m-1;
        int rp=n-1;
        int totalindex=m+n-1;
        
        while (lp>=0 && rp>=0) {
            if (nums1[lp]>nums2[rp]){
                nums1[totalindex]=nums1[lp];
                lp--;
            } 
            else{
                nums1[totalindex]=nums2[rp];
                rp--;
            }
            
            
            
            totalindex--;
        }
        
        while (rp>=0){
            nums1[totalindex]=nums2[rp];
            rp--;
            totalindex--;
        }
//         if(nums1.size()==0 || nums2.size()==0){
//             return nums1;
//         }
        
//         int lp=m-1;
//         int rp=n-1;
//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 if(nums1{i}<nums2{j}){
//                     nums1.pop_back();
//                     nums1.add(i,nums{j});
//                 }
                
//             }
//         }
    }
};