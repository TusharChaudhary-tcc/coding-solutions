# Maximum Length Substring With Two Occurrences

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s`, return the  **maximum**  length of a substring such that it contains  *at most two occurrences*  of each character.

 

Original
C++
 **Example 1:** 

 **Input:**  s = "bcbbbcba"

 **Output:**  4

 **Explanation:** 

The following substring has a length of 4 and contains at most two occurrences of each character: `"bcbbbcba"`.

 **Example 2:** 

 **Input:**  s = "aaaa"

 **Output:**  2

 **Explanation:** 

The following substring has a length of 2 and contains at most two occurrences of each character: `"aaaa"`.

 

 **Constraints:** 

- 2 <= s.length <= 100
- s consists only of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.1 MB (beats 62.18%)  
**Submitted:** 2026-11-14T18:05:12.592Z  

```cpp
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0, r=0;
        int maxlen=0;
        int hash[26]={0};
        while(r<s.size()){
            hash[s[r]-'a']++;
            while(hash[s[r]-'a'] > 2){
                hash[s[l]-'a']--;
                l++;
            }
            maxlen=max(maxlen, r-l+1);      
            r++;
        }
        return maxlen;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/)