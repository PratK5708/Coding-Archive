class Solution {
public:
    int passThePillow(int n, int time) {
        int a=1,b=0;
        while(time){
            if(b==0){
                a++;
            }
            else{
                a--;
            }
            if(a==n){
                b=1;
            }
            else if(a==1){
                b=0;
            }
            time--;
        }
        return a;
    }
};