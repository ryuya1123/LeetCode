// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem9.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        string x_str = to_string(x);
        bool isPalidrome;
        for( int i = 0; i < x_str.length(); ++i ){
            if( x_str[i] == x_str[x_str.length()-i-1] ){
                isPalidrome = true;
            }
            else{
                return false;
            }
        }
        return isPalidrome;
    }
};
// @lc code=end

