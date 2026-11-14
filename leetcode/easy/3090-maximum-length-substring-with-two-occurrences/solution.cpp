class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0, r=0;
        int maxlen=0;
        int hash[26]={0};
        while(r<s.size()){
            hash[s[r]-'a']++;
            while(hash[s[r]-'a'] > 2){
                hash[s[l]-'a']--;
                l++;
            }
            maxlen=max(maxlen, r-l+1);      
            r++;
        }
        return maxlen;
    }
};