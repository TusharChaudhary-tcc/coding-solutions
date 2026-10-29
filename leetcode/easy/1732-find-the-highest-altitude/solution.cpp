class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        int i=0;
        int prev=0;
        while(i<gain.size()){
            int check=prev+gain[i];
            if(check>ans){
                ans=check;
            }
            prev=check;
            i++;
        }

        return ans;
    }
};