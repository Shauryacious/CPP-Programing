class Solution {
public:
    bool isPowerOfThree(int n) {
        // If n is less than or equal to 0, it cannot be a power of 3 (since 3^x is always positive for any x)
        if(n<=0) return false;

        // 3^0 is 1, so if n is 1, it is a power of 3
        if(n==1) return true;

        // If n is divisible by 3, we recursively check if n/3 is a power of 3
        // This is based on the fact that if n is a power of 3, then n/3 must also be a power of 3
        if(n%3==0) return isPowerOfThree(n/3);
        //we can not directly call the recursive fuction because of ex: 5/3=1.6666666666666667 = 1, but 5 is not a power of 3 or 4/3=1.3333333333333333 = 1, but 4 is not a power of 3

        // If none of the above conditions are met, n is not a power of 3
        return false;
    }
};


Example 1:

Input: n = 27
Output: true
Explanation: 27 = 33



Example 2:

Input: n = 0
Output: false
Explanation: There is no x where 3x = 0.



Example 3:

Input: n = -1
Output: false
Explanation: There is no x where 3x = (-1).