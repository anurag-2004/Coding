class Solution {
    public:
        string clearDigits(string s) {
            string ans="";
            int i=0;
            while(i<s.size()){
                if(!isdigit(s[i])) ans+=s[i];
                else ans.pop_back();
                i++;
            }
            return ans;
        }
    };