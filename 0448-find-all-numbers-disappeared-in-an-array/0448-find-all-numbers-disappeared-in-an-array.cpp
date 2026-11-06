class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& n) {
        
        vector<int> ans;
        vector<bool>in(n.size()+1,false);
        for(int i=0;i<n.size();i++){
            in[n[i]]=true;
        }
for(int i=1 ; i <in.size();i++){
    if(!in[i])ans.push_back(i);
}
return ans;

    }
};