class Solution
{
public:
    int countPermutations(vector<int> &complexity)
    {
        int fir = complexity[0];
        long long int ans = 1;
        for (int i = 1; i < complexity.size(); i++)
        {
            if (complexity[i] <= fir)
            {
                return 0;
            }
            ans = ans * i % 1000000007;
        }
        return ans;
    }
};