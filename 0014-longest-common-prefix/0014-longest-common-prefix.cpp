class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool b=true;
        string ans="";
        for(int i=0;i<strs[0].length();i++){
char a=strs[0][i];
for(int j=0;j<strs.size();j++){
    if(a!=strs[j][i]){
    b=false;
    break;}
}
if(b==false)break;
ans.push_back(a);
        }
        return ans;
    }
};