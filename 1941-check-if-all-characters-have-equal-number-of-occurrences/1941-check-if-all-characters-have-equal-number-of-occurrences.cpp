class Solution {
public:
    bool areOccurrencesEqual(string s) {
        sort(s.begin(),s.end());
        int count=1;
         
         vector<int> num;

        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                count++;
            }else{
                num.push_back(count);
                count=1;
            }
        }
                num.push_back(count);
        sort(num.begin(),num.end());
        if(num[0]==num[num.size()-1])return true;
        return false;
    }
};