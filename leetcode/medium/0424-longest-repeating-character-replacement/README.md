# Longest Repeating Character Replacement

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a string `s` and an integer `k`. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most `k` times.

Return  *the length of the longest substring containing the same letter you can get after performing the above operations*.

 

Original
C++
 **Example 1:** 

```
Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.

```

 **Example 2:** 

```
Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
There may exists other ways to achieve this answer too.
```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s consists of only uppercase English letters.
- 0 <= k <= s.length

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8 MB  
**Submitted:** 2026-11-13T14:55:46.148Z  

```cpp
class Solution {
public:
    int characterReplacement(string s, int k) {
       
        int maxlen=0;
        for(int i=0; i<s.size(); i++){
            vector<int> hash(26, 0);
            int maxfreq=0;
            for(int j=i; j<s.size(); j++){
                hash[s[j]-'A']++;
                maxfreq=max(maxfreq, hash[s[j]-'A']);
                int changes=(j-i+1)-maxfreq;
                if(changes<=k){
                    maxlen=max(maxlen, j-i+1);
                }
                else{
                    break;
                }
            }
        }

        return maxlen;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-repeating-character-replacement/)