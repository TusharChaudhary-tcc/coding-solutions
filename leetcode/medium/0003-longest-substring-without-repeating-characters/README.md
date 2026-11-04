# Longest Substring Without Repeating Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, find the length of the  **longest**   **substring**  without duplicate characters.

 

 **Example 1:** 

```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

```

 **Example 2:** 

```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

```

 **Example 3:** 

```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

```

 

 **Constraints:** 

- 0 <= s.length <= 105
- s consists of English letters, digits, symbols and spaces.

## Solution

**Language:** C++  
**Runtime:** 12 ms (beats 78.09%)  
**Memory:** 19 MB (beats 81.38%)  
**Submitted:** 2026-11-04T16:13:23.485Z  

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxlength=0;
        vector<int> hash(256, -1);
        while(r<s.size()){
            if(hash[s[r]]!=-1){
                if(l<=hash[s[r]]){
                    l=hash[s[r]]+1;
                }
            }
            maxlength=max(maxlength, r-l+1);
            hash[s[r]]=r;
            r++;
        }

        return maxlength;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)