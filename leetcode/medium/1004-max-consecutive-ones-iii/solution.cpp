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