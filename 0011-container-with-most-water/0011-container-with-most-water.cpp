class Solution {
public:
    int maxArea(vector<int>& h) {
        int s=0;
        int e=h.size()-1;
        int ans=0;
        int temp=0;
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