# Number of Substrings Containing All Three Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s` consisting only of characters  *a*,  *b*  and  *c*.

Return the number of substrings containing  **at least**  one occurrence of all these characters  *a*,  *b*  and  *c*.

 

Original
C++
 **Example 1:** 

```
Input: s = "abcabc"
Output: 10
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 

```

 **Example 2:** 

```
Input: s = "aaacb"
Output: 3
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb". 

```

 **Example 3:** 

```
Input: s = "abc"
Output: 1

```

 

 **Constraints:** 

- 3 <= s.length <= 5 x 104
- s only consists of 'a', 'b' or 'c' characters.

## Solution

**Language:** C++  
**Runtime:** 8 ms (beats 55.81%)  
**Memory:** 11 MB (beats 52.59%)  
**Submitted:** 2026-11-12T11:47:01.039Z  

```cpp
class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        vector<int> hash(3, -1);
        for(int i=0; i<s.size(); i++){
            hash[s[i]-'a']=i;

            if(hash[0]!=-1 && hash[1]!=-1 && hash[2]!=-1){
                count= count + (1 + min({hash[0], hash[1], hash[2]}));
            }

        }

        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/)