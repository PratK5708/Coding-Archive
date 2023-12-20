class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
//         int n=prices.size();
//         int left=money;

//         for (int i=0;i<n-1;i++){
//             for (int j=i+1;j<n;j++){
//                 if (prices[i]+prices[j]<=money) {
//                     left=min(left,money-(prices[i]+prices[j]));
//                 }
//             }
//         }

//         return left;
        
      sort(prices.begin(),prices.end());
        int price= prices[0]+prices[1];
        if(price <= money)
        {
            return money-price;
        }
        return money;
    }
};