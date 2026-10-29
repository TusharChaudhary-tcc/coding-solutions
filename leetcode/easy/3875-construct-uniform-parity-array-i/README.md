# Construct Uniform Parity Array I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an array `nums1` of `n`  **distinct**  integers.

You want to construct another array `nums2` of length `n` such that the elements in `nums2` are either  **all odd or all even**.

For each index `i`, you must choose  **exactly one**  of the following (in any order):

- nums2[i] = nums1[i]
- nums2[i] = nums1[i] - nums1[j], for an index j != i

Return `true` if it is possible to construct such an array, otherwise, return `false`.

 

 **Example 1:** 

 **Input:**  nums1 = [2,3]

 **Output:**  true

 **Explanation:** 

- Choose nums2[0] = nums1[0] - nums1[1] = 2 - 3 = -1.
- Choose nums2[1] = nums1[1] = 3.
- nums2 = [-1, 3], and both elements are odd. Thus, the answer is true​​​​​​​.

 **Example 2:** 

 **Input:**  nums1 = [4,6]

 **Output:**  true

 **Explanation:** ​​​​​​​

- Choose nums2[0] = nums1[0] = 4.
- Choose nums2[1] = nums1[1] = 6.
- nums2 = [4, 6], and all elements are even. Thus, the answer is true.

 

 **Constraints:** 

- 1 <= n == nums1.length <= 100
- 1 <= nums1[i] <= 100
- nums1 consists of distinct integers.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 30.2 MB (beats 91.46%)  
**Submitted:** 2026-10-29T15:13:06.953Z  

```cpp
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even=0;
        int odd=0;
        int evenCount=0;
        int oddCount=0;
        for(auto a: nums1){
            if(a%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==0 || odd==0){
            return true;
        }
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2!=0){
                for(int j=0; j<nums1.size(); j++){
                    int check=nums1[i]-nums1[j];
                    if(i==j) continue;
                    else if(check%2==0){
                        evenCount++;
                        break;
                    }
                }    
            }
            else if(nums1[i]%2==0){
                for(int j=0; j<nums1.size(); j++){
                    int check=nums1[i]-nums1[j];
                    if(i==j) continue;
                    else if(check%2!=0){
                        oddCount++;
                        break;
                    }
                }    
            }
        }
        if((even+evenCount == nums1.size()) || (odd+oddCount == nums1.size())){
            return true;
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/construct-uniform-parity-array-i/)