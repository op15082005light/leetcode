class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& b, vector<int>& newInterval) {
int s=newInterval[0];
int e=newInterval[1];
vector<vector<int>> ans;
bool a=false;
int i=0;
bool c= false;
while(i<b.size() ){
    if(s>b[i][0] && s>b[i][1])
    ans.push_back(b[i]);
   else if(s <= b[i][0] || s<= b[i][1]){
    c=true;
break;}
    i++;
}
if(!c){
    ans.push_back(newInterval);
    return ans;
}
s=min(s,b[i][0]);
while (i < b.size() && e >= b[i][0]) {
    s = min(s, b[i][0]);
    e = max(e, b[i][1]);
    i++;
}
ans.push_back({s,e});

while(i<b.size()){
    ans.push_back(b[i]);
    i++;
}return ans;
    }
};