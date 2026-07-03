class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
        while(x != 0){
            int r =x%10;
            x = x/10;

            // Check for overflow before updating revNum
            if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && r > 7)) return 0; // Overflow case
            if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && r < -8)) return 0; // Underflow case

            revNum = (revNum * 10) + r;

        }

        return revNum;
       
    }
};