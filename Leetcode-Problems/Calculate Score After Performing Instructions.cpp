class Solution
{
public:
    long long calculateScore(vector<string> &instructions, vector<int> &values)
    {
        long long score = 0;
        int n = values.size();
        vector<bool> arr(n, false);
        for (int i = 0; i < instructions.size();)
        {
            if (!arr[i])
            {
                arr[i] = true;
            }
            if (instructions[i] == "jump")
            {
                i += values[i];
            }
            else if (instructions[i] == "add")
            {
                score += values[i];
                i++;
            }
            if (i < 0 || i >= n)
            {
                break;
            }
            if (arr[i])
                break;
        }
        return score;
    }
};