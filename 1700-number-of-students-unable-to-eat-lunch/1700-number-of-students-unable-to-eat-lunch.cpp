class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int none=0;
        int n=students.size();
        int got= 0;
        
        while(none<n-got){
            if (students.front()==sandwiches.front()){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                none=0;
                got++;
            } 
            else{
                students.push_back(students.front());
                students.erase(students.begin());
                none++;
            }
        }
        
        return n-got;
    }
};