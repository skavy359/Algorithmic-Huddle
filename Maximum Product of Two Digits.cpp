class Solution
{
public:
    int maxProduct(int n)
    {
        string temp = to_string(n);
        sort(temp.begin(), temp.end());
        int size = temp.size();
        int ans = (temp[size - 1] - '0') * (temp[size - 2] - '0');
        return ans;
    }
};