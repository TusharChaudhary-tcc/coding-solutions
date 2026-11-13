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