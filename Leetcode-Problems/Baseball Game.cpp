class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        vector<int> temp;
        for (string s : operations)
        {
            if (s == "C")
                temp.pop_back();
            else if (s == "D")
                temp.push_back(temp.back() * 2);
            else if (s == "+")
                temp.push_back(temp[temp.size() - 1] + temp[temp.size() - 2]);
            else
                temp.push_back(stoi(s));
        }
        int ans = accumulate(temp.begin(), temp.end(), 0);
        return ans;
    }
};