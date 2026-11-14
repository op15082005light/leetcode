class Solution {
public:
    int maxArea(vector<int>& h) {
        int s=0, e=h.size()-1, ans=0, temp=0;
        while(s<e){
             temp=min(h[s],h[e])*(e-s);
      if(ans<temp)ans=temp;

       if(h[s]<h[e]){
        s++;
       }else{
        e--;
       }

        }return ans;
    }
};