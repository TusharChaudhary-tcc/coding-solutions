class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxlength=0;
        vector<int> hash(256, -1);
        while(r<s.size()){
            if(hash[s[r]]!=-1){
                if(l<=hash[s[r]]){
                    l=hash[s[r]]+1;
                }
            }
            maxlength=max(maxlength, r-l+1);
            hash[s[r]]=r;
            r++;
        }

        return maxlength;
    }
};