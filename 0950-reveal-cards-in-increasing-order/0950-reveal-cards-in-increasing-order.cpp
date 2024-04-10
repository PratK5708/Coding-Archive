class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        sort(deck.begin(),deck.end());
        if(n<3){
            return deck;
        }
        queue<int> q;
        int i = n-1;
        q.push(deck[i]);
        q.push(deck[i-1]);
        i-=2;
        while(i>=0){
            int t = q.front();
            q.pop();
            q.push(t);
            q.push(deck[i--]);
        }
        vector<int> ans;
        while(q.size()){
            ans.push_back(q.front());
            q.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};