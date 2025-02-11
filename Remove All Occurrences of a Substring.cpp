class Solution {
    public:
        string removeOccurrences(string s, string part) {
            string ans;
            int len = part.length();
            int last = part[len - 1];
    
            for (char c : s) {
                ans.push_back(c);
                if (c == last && ans.size() >= len) {
                    if (ans.substr(ans.size() - len) == part) {
                        ans.erase(ans.size() - len);
                    }
                }
            }
            return ans;
        }
    };