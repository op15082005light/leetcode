class Solution {
public:
    string digitSum(string s, int k) {
string ans="";
int sum=0;
while(s.size()>k){
    sum=0;
for(int i=0;i<s.size();i++){
if((i+1)%k==0|| i == s.size()-1 ){
    sum+=s[i]-'0';
    ans=ans+to_string(sum);
    sum=0;
    
}else{
    sum+=s[i]-'0';}
}s=ans;
ans="";
}return s;
    }
};