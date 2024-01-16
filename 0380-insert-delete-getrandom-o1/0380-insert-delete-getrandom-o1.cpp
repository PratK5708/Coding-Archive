// class RandomizedSet {
// public:
//     RandomizedSet() {
//         vector<int> vec;
//     }
    
//     bool insert(int val) {
//         bool a=vec.find(val);
//         if(a==false){
//             vec.pushback(val);
//         }
//         else{
//             continue;
//         }
//     }
    
//     bool remove(int val) {
        // if (index.find(val) == index.end()) {
        //             return false;
//
//     }
    
//     int getRandom() {
        
//     }
// };

// /**
//  * Your RandomizedSet object will be instantiated and called as such:
//  * RandomizedSet* obj = new RandomizedSet();
//  * bool param_1 = obj->insert(val);
//  * bool param_2 = obj->remove(val);
//  * int param_3 = obj->getRandom();
//  */

class RandomizedSet {
public:
    vector<int> vec;
    unordered_map<int, int> index;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (index.find(val) != index.end()) {
            return false;
        }
        vec.push_back(val);
        index[val] = vec.size() - 1;

        return true;
        
    }
    
    bool remove(int val) {
        if (index.find(val) == index.end()) {
            return false;
        }
        int lastElement = vec.back();
        int idxToRemove = index[val];

        vec[idxToRemove] = lastElement;
        index[lastElement] = idxToRemove;
        vec.pop_back();
        index.erase(val);

        return true;
        
    }
    
    int getRandom() {
        int randomIndex = rand() % vec.size();
        return vec[randomIndex];
        
    }
};
