class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            int ans=0;
            multiset <long long> s;
            for(auto el : nums) s.insert(el);
            while(s.size()>1){
                long long v1= *s.begin();
                s.erase(s.begin());
                if(v1>=k) break;
                long long v2= *s.begin();
                s.erase(s.begin());
    
                long long val= v1*2 +v2;
                s.insert(val);
                ans++;
            }
            return ans;
        }
    };