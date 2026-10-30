class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int N=strs.size();
        int n=strs[0].size();
        int count=0;
        for(int j=0; j<n; j++){
            for(int i=0; i<N-1; i++){
                if(strs[i][j]>strs[i+1][j]){
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};