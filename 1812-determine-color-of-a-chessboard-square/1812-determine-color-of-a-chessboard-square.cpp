class Solution {
public:
    bool squareIsWhite(string c) {
        int a=c[0]-'a'+1;
        int b=c[1]-'0';
        if(a%2==0&& b%2==0)return false;
        if(a%2==1&& b%2==1)return false;
        return true;
    }
};