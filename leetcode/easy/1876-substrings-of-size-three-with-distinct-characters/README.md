# Substrings of Size Three with Distinct Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A string is  **good**  if there are no repeated characters.

Given a string `s`​​​​​, return  *the number of  **good substrings**  of length  **three** in* `s`​​​​​​.

Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

A  **substring**  is a contiguous sequence of characters in a string.

 

 **Example 1:** 

```
Input: s = "xyzzaz"
Output: 1
Explanation: There are 4 substrings of size 3: "xyz", "yzz", "zza", and "zaz". 
The only good substring of length 3 is "xyz".

```

 **Example 2:** 

```
Input: s = "aababcabc"
Output: 4
Explanation: There are 7 substrings of size 3: "aab", "aba", "bab", "abc", "bca", "cab", and "abc".
The good substrings are "abc", "bca", "cab", and "abc".

```

 

 **Constraints:** 

- 1 <= s.length <= 100
- s​​​​​​ consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 31.97%)  
**Memory:** 8.9 MB (beats 15.89%)  
**Submitted:** 2026-11-08T18:39:13.714Z  

```cpp
class Solution {
public:
    int countGoodSubstrings(string s) {
        int l=0, r=0, count=0;
        unordered_map<char, int> m;
        while(r<s.size()){
            m[s[r]]++;
            if(r-l+1 > 3){
                m[s[l]]--;
                if(m[s[l]]==0){
                    m.erase(s[l]);
                }
                l++;
            }
            if(r-l+1 && m.size()==3){
                count++;
            }
            r++;
        }

        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/)