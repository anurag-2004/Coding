class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        
        // Find the first decreasing element from the end
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }
        
        // If no such element is found, reverse the entire array
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
        } else {
            // Find the next greater element from the end
            for (int i = n - 1; i > ind; i--) {
                if (nums[i] > nums[ind]) {
                    swap(nums[i], nums[ind]);
                    break;
                }
            }
            // Reverse the elements after the index 'ind'
            reverse(nums.begin() + ind + 1, nums.end());
        }
    }
};
