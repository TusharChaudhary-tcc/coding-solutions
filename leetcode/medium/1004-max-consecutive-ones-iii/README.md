# Max Consecutive Ones III

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a binary array `nums` and an integer `k`, return  *the maximum number of consecutive* `1` *'s in the array if you can flip at most*  `k` `0`'s.

 

 **Example 1:** 

```
Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
```

 **Example 2:** 

```
Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- nums[i] is either 0 or 1.
- 0 <= k <= nums.length

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 79.4 MB (beats 28.33%)  
**Submitted:** 2026-11-06T14:55:11.680Z  

```cpp
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, r=0, zero=0;
        int maxlen=0;
        while(r<nums.size()){
            if(nums[r]==0) zero++;
            int len=r-l+1;
            if(zero>k){
                if(nums[l]==0) zero--;
                l++;
            }
            else{
                maxlen=max(maxlen, r-l+1);
            }
            r++;
        }

        return maxlen;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/max-consecutive-ones-iii/)