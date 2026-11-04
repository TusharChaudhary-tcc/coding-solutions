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
**Runtime:** 52 ms (beats 57.80%)  
**Memory:** 19.1 MB (beats 71.12%)  
**Submitted:** 2026-11-04T15:55:56.712Z  

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int maxlength=0;
        unordered_map<char, int> m;
        while(j<s.size()){
            if(m.find(s[j])!=m.end() && m[s[j]]>=i){
                i=m[s[j]]+1;
            }
            m[s[j]]=j;
            maxlength=max(maxlength, j-i+1);
            j++;
        }

        return maxlength;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)