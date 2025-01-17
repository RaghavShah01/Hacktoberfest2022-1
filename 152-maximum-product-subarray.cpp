class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long int maxp = INT_MIN, prod = 1;
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            maxp = max(maxp,prod);
            if(prod==0) prod=1;
        }
    
    prod = 1;
    
    for(int i=nums.size()-1;i<nums.size();i--){
            prod*=nums[i];
            maxp = max(maxp,prod);
            if(prod==0) prod=1;
        }
        return maxp;
    }
    
};
