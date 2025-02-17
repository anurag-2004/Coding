class Solution {
    public:
        bool canPartition(string &s, int index, int target){
            if(index==s.size()) return target==0;
    
            int sum=0;
            for(int i=index;i<s.size();i++){
                sum=sum*10 + (s[i]-'0');
                if(sum>target) break;
                if(canPartition(s,i+1,target-sum)) return true;
            }
            return false;
        }
        int punishmentNumber(int n) {
            int total=0;
            for(int i=1;i<=n;i++){
                int square= i*i;
                string squarestr= to_string(square);
                if(canPartition(squarestr,0,i)){
                    total+=square;
                }
            }
            return total;
        }
    };