class Solution {
public:
    string defangIPaddr(string address) {
        string temp;
        for(int i=0;i<address.size();i++){
            if(address[i]!='.'){
                temp=temp+address[i];
            }
            else{
                temp=temp+"[.]";
            }
        }
        return temp;
    }
};