class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even=0;
        int odd=0;
        int evenCount=0;
        int oddCount=0;
        for(auto a: nums1){
            if(a%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==0 || odd==0){
            return true;
        }
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2!=0){
                for(int j=0; j<nums1.size(); j++){
                    int check=nums1[i]-nums1[j];
                    if(i==j) continue;
                    else if(check%2==0){
                        evenCount++;
                        break;
                    }
                }    
            }
            else if(nums1[i]%2==0){
                for(int j=0; j<nums1.size(); j++){
                    int check=nums1[i]-nums1[j];
                    if(i==j) continue;
                    else if(check%2!=0){
                        oddCount++;
                        break;
                    }
                }    
            }
        }
        if((even+evenCount == nums1.size()) || (odd+oddCount == nums1.size())){
            return true;
        }
        return false;
    }
};