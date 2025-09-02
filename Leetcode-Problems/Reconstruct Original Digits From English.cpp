class Solution
{
public:
    string originalDigits(string s)
    {
        int arr[26] = {0};
        for (char c : s)
            arr[c - 'a']++;
        int count[10] = {0};
        count[0] = arr['z' - 'a'];
        count[2] = arr['w' - 'a'];
        count[4] = arr['u' - 'a'];
        count[6] = arr['x' - 'a'];
        count[8] = arr['g' - 'a'];
        count[1] = arr['o' - 'a'] - count[0] - count[2] - count[4];
        count[3] = arr['h' - 'a'] - count[8];
        count[5] = arr['f' - 'a'] - count[4];
        count[7] = arr['s' - 'a'] - count[6];
        count[9] = arr['i' - 'a'] - count[5] - count[6] - count[8];
        string ans;
        for (int i = 0; i < 10; i++)
        {
            ans.append(count[i], i + '0');
        }
        return ans;
    }
};