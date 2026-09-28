class Solution {
public:
    int maxDepth(string s) {
        int n=0,count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                n++;
            }else if(s[i]==')'){
                n--;
            }if(n>count){
                count=n;
            }
        }return count;
    }
};