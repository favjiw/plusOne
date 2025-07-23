code submitted to leetcode:
https://leetcode.com/problems/plus-one/submissions/1708024587/
The result of this code is Runtime Error. This happened because:
Line 7: Char 29: runtime error: signed integer overflow: 987654321 * 10 cannot be represented in type 'int' (solution.cpp)
SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior prog_joined.cpp:16:29

or the int size is too big.
