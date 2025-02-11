#define ll long long
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,ll>freq;
        ll n= nums.size();
        ll totalpairs= (n*(n-1))/2;
        ll goodpairs=0;
        for(ll i=0;i<n;i++){
            goodpairs+= freq[i-nums[i]];
            freq[i-nums[i]]++;
        }
        return totalpairs-goodpairs;
    }
};