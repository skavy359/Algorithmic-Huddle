class Solution
{
public:
    int totalWaviness(int num1, int num2)
    {
        int ans = 0;
        for (int i = num1; i <= num2; i++)
        {
            string temp = "";
            int k = i;
            while (k > 0)
            {
                temp += (k % 10);
                k /= 10;
            }
            if (temp.length() < 3)
                continue;
            reverse(temp.begin(), temp.end());
            for (int i = 1; i < temp.length() - 1; i++)
            {
                if (temp[i] > temp[i - 1] && temp[i] > temp[i + 1])
                    ans++;
                else if (temp[i] < temp[i - 1] && temp[i] < temp[i + 1])
                    ans++;
            }
        }
        return ans;
    }
};