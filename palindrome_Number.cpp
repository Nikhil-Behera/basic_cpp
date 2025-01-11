class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
        return false;
        }
        int n;
        n=x;
        long int rev=0;
        int digit;
        while(n!=0){
            digit = n % 10;
            rev = (rev * 10) + digit;
            n = n / 10;
        }
        return(rev==x);
    }
};