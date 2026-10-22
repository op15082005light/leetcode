int square(int a){
    int ans=0;
    while(a!=0){
        ans=ans+(a%10)*(a%10);
        a=a/10;
    }return ans;
}


class Solution {
public:
    bool isHappy(int n) {
        
        int slow=n;
        int fast=n;
        while(fast!=1){
slow=square(slow);
            fast=square(fast);
            fast=square(fast);
            if(fast==slow && fast != 1){
                return false;
            }
        }return true;
    }
};