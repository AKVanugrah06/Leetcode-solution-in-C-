class Solution {
public:
    bool isPalindrome(int x) {
        int orginal = x;
        long long int rev = 0;
        if(x<0) return 0;
        while (x != 0){
            int a = x % 10;
            x = x/10;
            rev = (rev*10) + a;
        }
        if(rev == orginal ) return 1; 
        else return 0;
    }
};