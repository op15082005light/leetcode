class Solution {
public:
    int addDigits(int num) {
int val=0;
while(num/10>0){
    val=0;
while(num>0){
    val=val+(num%10);
    num=num/10;
}
num=val;
}
return num;
    }
};