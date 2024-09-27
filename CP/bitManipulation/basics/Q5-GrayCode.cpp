// An n-bit gray code sequence is a sequence of 2n integers where:

// Every integer is in the inclusive range [0, 2n - 1],
// The first integer is 0,
// An integer appears no more than once in the sequence,
// The binary representation of every pair of adjacent integers differs by exactly one bit, and
// The binary representation of the first and last integers differs by exactly one bit.
// Given an integer n, return any valid n-bit gray code sequence.

// Example 1:
// Input: n = 2
// Output: [0,1,3,2]
// Explanation:
// The binary representation of [0,1,3,2] is [00,01,11,10].
// - 00 and 01 differ by one bit
// - 01 and 11 differ by one bit
// - 11 and 10 differ by one bit
// - 10 and 00 differ by one bit
// [0,2,3,1] is also a valid gray code sequence, whose binary representation is [00,10,11,01].
// - 00 and 10 differ by one bit
// - 10 and 11 differ by one bit
// - 11 and 01 differ by one bit
// - 01 and 00 differ by one bit

// Example 2:
// Input: n = 1
// Output: [0,1]


#include <iostream>
#include <vector>

using namespace std;

vector<string> solution(int n) {
    if (n == 1) {
        vector<string> bres;
        bres.push_back("0");
        bres.push_back("1");
        return bres;
    }

    vector<string> rres = solution(n - 1);
    vector<string> mres;

    for (int i = 0; i < rres.size(); i++) {
        string rstr = rres[i];
        mres.push_back("0" + rstr);
    }

    for (int i = rres.size() - 1; i >= 0; i--) {
        string rstr = rres[i];
        mres.push_back("1" + rstr);
    }

    return mres;
}

    vector<string> helper(int n){
        if(n==1){
            vector<string> base_string;
            base_string.push_back("0");
            base_string.push_back("1");
            return base_string;
        }
        vector<string> res_string = helper(n-1);
        vector<string> modi_string;

        for(int i=0; i<res_string.size(); i++){
            modi_string.push_back("0" + res_string[i]);
        }

        for(int i=res_string.size()-1; i>=0; i--){
            modi_string.push_back("1" + res_string[i]);
        }

        return modi_string;
    }
    // vector<int> grayCode(int n) {
    //     if()
    // }

int main() {
    int N;

    // Take input for N
    cout << "Enter the value of N: ";
    cin >> N;

    // Call the solution function and print the result
    vector<string> result = helper(N);
    
    // Output the generated bit patterns
    for (auto ele : result) {
        cout << ele << " ";
    }

    return 0;
}
