class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans(code.size());
        if(k==0){
            return ans;
        }
        int size=code.size();
        int sum=0;
        int f=1, l=k;
        if(k<0){
            f= size-(-1 * k);
            l=size-1;
        }

        for(int i=f; i<=l; i++){
            sum+=code[i];
        }

        for(int i=0; i<size; i++){
            ans[i]=sum;
            sum-=code[f%size];
            sum+=code[(l+1)%size];
            f++;
            l++;
        }

        return ans;
    }
};