class Solution {
public:
    bool isPalindrome(int x) {

       long long int rev =0;
       long long int temp =x;

       while(temp !=0){
           long long int rem = temp%10;
           rev = rev*10+rem;
           temp = temp/10;
       }

       if(x<0){
           return false;
       }
       return (x == rev);
    }
};
