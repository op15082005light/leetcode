class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int >count(26,0);
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<t.length();i++){
            count[t[i]-'a']++;
            count[s[i]-'a']--;
        }
       for(int i=0;i<26;i++){
            if(count[i]!=0){
                return false;
            }
        }return true;
    }
};