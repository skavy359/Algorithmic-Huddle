class Solution {
    public:
        string smallestNumber(string pattern) {
            stack<int> temp;
            string ans = "";
            for (int i = 0; i <= pattern.size(); i++) {
                temp.push(i + 1);
                if (i == pattern.size() || pattern[i] == 'I') {
                    while (!temp.empty()) {
                        ans += to_string(temp.top());
                        temp.pop();
                    }
                }
            }
            return ans;
        }
    };