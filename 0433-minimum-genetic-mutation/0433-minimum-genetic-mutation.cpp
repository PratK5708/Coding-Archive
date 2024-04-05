class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set<string>s(bank.begin(),bank.end());
        unordered_set<string>a;
        queue<pair<string,int>> q;
        q.push({startGene,0});

        while (!q.empty()){
auto [curr, count] = q.front();
q.pop();

            if (curr==endGene){
                return count;
            }

            a.insert(curr);

            for (int i=0;i<8;i++){
                string temp=curr;
                for (char c : {'A','C','G','T'}){
                    temp[i]=c;

                    if ((s.find(temp)!=s.end()) && (a.find(temp)==a.end())){
                        q.push({temp,count+1});
                    }
                }
            }
        }
        return -1;
    }
};
