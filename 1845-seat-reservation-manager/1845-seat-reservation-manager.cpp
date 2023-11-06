// class SeatManager {
// public:
//     unordered_set<int>s;
//     int m;
//     int i=0;

//         SeatManager(int n) {
//             m=n;
//         }

//         int reserve() {
//             int x=1;
//             // if(s.empty()==NULL){
//             if(!s.empty()){
//                 x=*(s.begin());
//                 s.erase(x);
//                 return x;
//             }
//             i++;
//             return i;
//         }

//         void unreserve(int seatNumber) {
//             s.insert(seatNumber);

//         }
// };
class SeatManager {
public:
    set<int> set;
    SeatManager(int n) {
	    for (int i = 1; i <= n; ++i)
		    set.insert(i);
    }
    int reserve() {
	    int res = *begin(set);
	    set.erase(begin(set));
	    return res;
    }
    void unreserve(int seatNumber) {
	    set.insert(seatNumber);
    }
};


/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */