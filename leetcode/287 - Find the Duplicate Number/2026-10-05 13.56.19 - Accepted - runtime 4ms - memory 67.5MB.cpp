class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> A(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++) {
            A[nums[i]]++;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (A[i] > 1) {
                return i;
            }
        }

        return -1;
    }
};