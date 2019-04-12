## Problem
A password is complex enough, if it meets all of the following conditions:

its length is at least 5 characters;
- it contains at least one capital letter;
- it contains at least one small letter;
- it contains at least one digit.
Determine whether a given password is complex enough.

## Example
For inputString = "my.Password123", the output should be
passwordCheckRegExp(inputString) = true;

For inputString = "my.password123", the output should be
passwordCheckRegExp(inputString) = false.

## Input | Output
[execution time limit] 0.5 seconds (cpp)

[input] string inputString

String representing a password.

Guaranteed constraints:
3 ≤ inputString.length ≤ 15.

[output] boolean

true if the given password is complex enough, false otherwise.
