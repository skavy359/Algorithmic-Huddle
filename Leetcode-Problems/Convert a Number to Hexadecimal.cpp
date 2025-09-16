class Solution
{
public:
    string toHex(int n)
    {
        if (n == 0)
            return "0";
        char arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                        '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        string ans = "";
        unsigned int num = n;
        while (num > 0)
        {
            int rem = num % 16;
            ans += arr[rem];
            num /= 16;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};