#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Helper function to solve the climbing stairs problem recursively with memoization
    int solve(int n, vector<int>& dp){
        // Base cases
        if(n < 0) return 0;
        if(n == 0) return 1; // Only one way to climb when there are no steps left

        // If the solution is already computed, return it
        if(dp[n] != -1) return dp[n];

        // Recursive calls to solve subproblems
        int one_step_solution = solve(n - 1, dp);
        int two_step_solution = solve(n - 2, dp);

        // Memoize the result and return
        return dp[n] = one_step_solution + two_step_solution;
    }

    // Function to calculate the number of distinct ways to climb stairs
    int climbStairs(int n) {
        // Initialize the memoization array with -1
        vector<int> dp(n + 1, -1);
        // Call the solve function to calculate the number of distinct ways
        return solve(n, dp);
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;
    // Test cases
    int n1 = 2; // Output: 2
    int n2 = 3; // Output: 3
    // Output the number of distinct ways for each test case
    cout << "Ways to climb " << n1 << " steps: " << solution.climbStairs(n1) << endl;
    cout << "Ways to climb " << n2 << " steps: " << solution.climbStairs(n2) << endl;
    return 0;
}
