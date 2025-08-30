class Solution
{
public:
    int minDeletion(string s, int k)
    {
        int arr[26] = {0};
        int count = 0;
        for (char c : s)
            arr[c - 'a']++;
        for (int i : arr)
            if (i != 0)
                count++;
        if (count <= k)
            return 0;
        sort(arr, arr + 26);
        int ans = 0;
        for (int i : arr)
        {
            if (count <= k)
                break;
            if (i != 0)
            {
                ans += i;
                count--;
            }
        }
        return ans;
    }
};