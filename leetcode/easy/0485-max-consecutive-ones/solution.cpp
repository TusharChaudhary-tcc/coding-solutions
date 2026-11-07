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