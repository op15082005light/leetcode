class Solution {
public:
char lowercase(char ch){
    if(ch>='A'&&ch<='Z'){
        return ch-'A'+'a';
    }
    return ch;
}
    bool isPalindrome(string s) {
        string ans="";
 int j=0;
 for(int i=0;i<s.length();i++){
    if ((lowercase(s[i]) >= 'a' && lowercase(s[i]) <= 'z') ||
    (s[i] >= '0' && s[i] <= '9')) {
    ans += lowercase(s[i]);
}

 }int final=0;
 int e=ans.length()-1;
 int a=0;
 while(a <= e){
    if(ans[a]!=ans[e]){
        return 0;
    }a++;
    e--;
}

 return 1;
    }
};