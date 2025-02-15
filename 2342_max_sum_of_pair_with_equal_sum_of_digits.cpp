class Solution {
    public:
        int maximumSum(vector<int>& nums) {
            int n= nums.size();
            int maxsum= -1;
            unordered_map<int,int>mp;
            for(int num: nums){
                int digitsum=0;
                int temp= num;
                while(temp){
                    digitsum+= temp%10;
                    temp/=10;
                }
                if(mp.count(digitsum)){
                    maxsum = max(maxsum, mp[digitsum]+num);
                }
                mp[digitsum]= max(mp[digitsum],num);
            }
            return maxsum;
        }
    };