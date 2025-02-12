class Solution {
    public:
        string removeOccurrences(string s, string part) {
            string result;
            int partlength= part.length();
            for(char ch:s){
                result.push_back(ch);
                if(result.size()>= partlength && result.substr(result.size()-partlength)==part){
                    result.erase(result.size()-partlength);
                }
            }
            return result;
        }
    };