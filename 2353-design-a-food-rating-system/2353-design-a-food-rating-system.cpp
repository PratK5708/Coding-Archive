// class FoodRatings {
// public:
//     unordered_map<string,int> Food;
//     unordered_map<string, priority_queue<pair<int,string>>> Cuisine;
    
//     FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
//         for (int i=0;i<foods.size();i++){
//             Food[foods[i]]=ratings[i];
//             Cuisine[cuisines[i]].push(make_pair(ratings[i],foods[i]));
//         }
//     }

//     void changeRating(string food, int newRating) {
//         Food[food]=newRating;
//         string cuisine=getCuisine(food); // getting specific cuisine
//         priority_queue<pair<int,string>>& pq=Cuisine[cuisine]; 
//         pq.push(make_pair(newRating, food)); // so push basically a trans
//     }

//     string highestRated(string cuisine) {
//         priority_queue<pair<int, string>>& pq=Cuisine[cuisine];
//         if (pq.empty()){
//             return ""; //returning high rated
//         }
//         while ((!pq.empty() && Food[pq.top().second]) != pq.top().first) {
//             pq.pop();
//         }
//         return pq.top().second;
//     }

//     string getCuisine(string food){
//         return Cuisine[food];
//     }
// };

// /**
//  * Your FoodRatings object will be instantiated and called as such:
//  * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
//  * obj->changeRating(food,newRating);
//  * string param_2 = obj->highestRated(cuisine);
//  */


class FoodRatings {
public:
    unordered_map<string,int>mp;
    unordered_map<string,string>mp2;
    unordered_map<string,set<pair<int,string>>>hrating;
    
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n=foods.size();
        for(int i=0;i<n;i++){
            mp[foods[i]]=ratings[i];
            mp2[foods[i]]=cuisines[i];
            hrating[cuisines[i]].insert({-ratings[i],foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) 
    {
        string t=mp2[food];
        int tmp=mp[food];
        mp[food]=newRating;
        hrating[t].erase(hrating[t].find({-tmp,food}));
        hrating[t].insert({-newRating,food});
    }
    
    string highestRated(string cuisine) {
        
        string res="";
        auto anss=*(hrating[cuisine].begin());
        res=anss.second;
        return res;
    }
};

