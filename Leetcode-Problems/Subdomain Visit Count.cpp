class Solution
{
public:
    vector<string> subdomainVisits(vector<string> &cpdomains)
    {
        unordered_map<string, int> khushi;
        for (string s : cpdomains)
        {
            int space = s.find(" ");
            int rep = stoi(s.substr(0, space));
            s = s.substr(space + 1);
            khushi[s] += rep;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '.')
                {
                    string temp = s.substr(i + 1);
                    khushi[temp] += rep;
                }
            }
        }
        vector<string> ans;
        for (auto i : khushi)
        {
            ans.push_back(to_string(i.second) + " " + i.first);
        }
        return ans;
    }
};