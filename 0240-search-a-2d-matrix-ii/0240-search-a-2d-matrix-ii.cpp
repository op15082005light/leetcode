class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0;
        int e=0;
        int m=matrix[0].size();
        int n=matrix.size();
s=0;
e=m-1;
        while( e>=0 && s<n ){
            if(matrix[s][e]==target){
return true;
            }else if(matrix[s][e]<target){
                s++;
            }else{
                e--;
            }
        }return false;
    }
};