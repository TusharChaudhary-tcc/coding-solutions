class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int maxlength=0;
        unordered_map<char, int> m;
        while(j<s.size()){
            if(m.find(s[j])!=m.end() && m[s[j]]>=i){
                i=m[s[j]]+1;
            }
            m[s[j]]=j;
            maxlength=max(maxlength, j-i+1);
            j++;
        }

        return maxlength;
    }
};