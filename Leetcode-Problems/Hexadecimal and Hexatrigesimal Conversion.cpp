class Solution
{
public:
    string hexConvert(int n)
    {
        string temp = "";
        char arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
        while (n > 0)
        {
            int rem = n % 16;
            temp += arr[rem];
            n /= 16;
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
    string triConvert(int n)
    {
        string temp = "";
        char arr[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
                        '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                        'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
                        'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        while (n > 0)
        {
            int rem = n % 36;
            temp += arr[rem];
            n /= 36;
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
    string concatHex36(int n)
    {
        int sq = n * n;
        int tri = n * n * n;
        return hexConvert(sq) + triConvert(tri);
    }
};