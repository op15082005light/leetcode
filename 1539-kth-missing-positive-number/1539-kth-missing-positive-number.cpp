class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans=0;
        int i=1;
        if(arr[0]-0>1){
        int diff=arr[0];
            ans=0;
            while(diff>1&&k!=0){
                k--;
                ans++;
                diff--;
            }
        }
        int n=arr.size()-1;
        while(i<=n&&k!=0){
  if(arr[i]-arr[i-1]>1){
int diff=arr[i]-arr[i-1];
            ans=arr[i-1];
while(k>0&&diff>1){
    diff--;
    k--;
    ans++;
}
  }i++;
        }if(k!=0){

        ans=arr[arr.size()-1];
        while(k!=0){
            ans++;
            k--;
        }
        }
        return ans;
    }
};