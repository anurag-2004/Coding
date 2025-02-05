class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        int c=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]) c++;
            if(c>1) return false;
        }
        if(c==1 and nums.back()>nums[0]) return false;
        return true;
    }
};