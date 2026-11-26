class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>A;
        vector<int>B;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
              A.push_back(0);  
            }
            else{
                B.push_back(nums[i]);
            }
        }
        vector<int>result =B; 
        result.insert(result.end(), A.begin(), A.end());
        nums=result;
        // int j = 0;

        // for(int i = 0; i < nums.size(); i++) {

        //     if(nums[i] != 0) {
        //         nums[j] = nums[i];
        //         j++;
        //     }
        // }

        // while(j < nums.size()) {
        //     nums[j] = 0;
        //     j++;
        // }
    }
};