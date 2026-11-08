class Solution {
public:
    int countGoodSubstrings(string s) {
        int l=0, r=0, count=0;
        unordered_map<char, int> m;
        while(r<s.size()){
            m[s[r]]++;
            if(r-l+1 > 3){
                m[s[l]]--;
                if(m[s[l]]==0){
                    m.erase(s[l]);
                }
                l++;
            }
            if(r-l+1 && m.size()==3){
                count++;
            }
            r++;
        }

        return count;
    }
};