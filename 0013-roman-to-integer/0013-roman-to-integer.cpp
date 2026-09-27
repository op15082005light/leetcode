int val(char c){
    int a[7]={1000,500,100,50,10,5,1};
    if(c=='M'){
        return 1000;
    }
    if(c=='D'){
        return 500;
    }
    if(c=='C'){
        return 100;
    }
    if(c=='L'){
        return 50;
    }
    if(c=='X'){
        return 10;
    }
    if(c=='V'){
        return 5;
    }
    if(c=='I'){
        return 1;
    }return 0;
}


class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int a[7]={1000,500,100,50,10,5,1};
        for(int i=0;i<s.length();i++){
int sum=val(s[i])-val(s[i+1]);
if(sum>=0){
    ans+=val(s[i]);
}else{
    ans+=(-1)*sum;
    i++;
}
        }return ans;
    }
};