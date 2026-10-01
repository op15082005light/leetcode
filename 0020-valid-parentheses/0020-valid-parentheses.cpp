class Solution {
public:
    bool isValid(string s) {
         stack<char>a;
    for(int i=0;i<s.length();i++){
if(s[i]=='('||s[i]=='{'||s[i]=='['){
    a.push(s[i]);
}else   if(!a.empty()){
 if((s[i]=='}'&&a.top()=='{')||(s[i]==']'&&a.top()=='[')||(s[i]==')'&&a.top()=='(')){
   
a.pop();
}else {
    return false;
}
    }else{
        return false;
    }}

if(a.empty()){
    return true;
}else{
return false;
}
    }
};