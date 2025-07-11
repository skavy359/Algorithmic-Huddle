class Solution
{
public:
    char slowestKey(vector<int> &releaseTimes, string keysPressed)
    {
        int arr[26] = {0};
        arr[keysPressed[0] - 'a'] = releaseTimes[0];
        for (int i = 1; i < keysPressed.length(); i++)
        {
            arr[keysPressed[i] - 'a'] = max(releaseTimes[i] - releaseTimes[i - 1], arr[keysPressed[i] - 'a']);
        }
        int ans = INT_MIN;
        char ch;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > ans)
            {
                ans = arr[i];
                ch = i + 'a';
            }
            else if (arr[i] == ans)
            {
                if ((i + 'a') > ch)
                {
                    ch = i + 'a';
                }
            }
        }
        return ch;
    }
};