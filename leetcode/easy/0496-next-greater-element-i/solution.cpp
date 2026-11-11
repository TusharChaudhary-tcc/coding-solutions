class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i=0, j=0;
        for(int i=0; i<nums1.size(); i++){
            int j=0;
            while(j<nums2.size() && nums2[j]!=nums1[i]){
                j++;
            }
            j++;

            while(j<nums2.size() && nums2[j]<=nums1[i]){
                j++;
            }

            if(j<nums2.size()){
                ans.push_back(nums2[j]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};