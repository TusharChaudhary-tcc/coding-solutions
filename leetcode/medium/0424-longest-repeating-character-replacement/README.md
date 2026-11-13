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
**Runtime:** 2 ms (beats 72.87%)  
**Memory:** 11 MB (beats 18.55%)  
**Submitted:** 2026-11-13T15:02:20.370Z  

```cpp
class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0, r=0;
        int maxfreq=0;
        vector<int> hash(26, 0);
        int maxlen=0;
        while(r<s.size()){
            hash[s[r]-'A']++;
            maxfreq=max(maxfreq, hash[s[r]-'A']);
            int change=(r-l+1)-maxfreq;
            if(change>k){
                hash[s[l]-'A']--;
                maxfreq=0;
                l++;
            }
            if(change<=k){
                maxlen=max(maxlen, r-l+1);
            }
            r++;
        }

        return maxlen;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-repeating-character-replacement/)