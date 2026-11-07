# Max Consecutive Ones

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a binary array `nums`, return  *the maximum number of consecutive* `1` *'s in the array*.

 

 **Example 1:** 

```
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

```

 **Example 2:** 

```
Input: nums = [1,0,1,1,0,1]
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- nums[i] is either 0 or 1.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 29.62%)  
**Memory:** 50 MB (beats 88.77%)  
**Submitted:** 2026-11-07T14:45:13.709Z  

```cpp
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // int n=nums.size();
        // int count=0;
        // int ans=0;
        // for(int i=0; i<n; i++){
        //     if(nums[i]==1){
        //         count++;
        //     }
        //     else{
        //         count=0;
        //     }
        //     ans=max(ans,count);
        // }
        // return ans;

        int l=0, r=0, maxlen=0, count=0;
        while(r<nums.size()){
            if(nums[r]==1) count++;
            if(nums[r]==0){
                count=0;
                l=r+1;
            }
            maxlen=max(maxlen, count);
            r++;
        }
        return maxlen;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/max-consecutive-ones/)