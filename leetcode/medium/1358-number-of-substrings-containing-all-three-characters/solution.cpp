class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        vector<int> hash(3, -1);
        for(int i=0; i<s.size(); i++){
            hash[s[i]-'a']=i;

            if(hash[0]!=-1 && hash[1]!=-1 && hash[2]!=-1){
                count= count + (1 + min({hash[0], hash[1], hash[2]}));
            }

        }

        return count;
    }
};