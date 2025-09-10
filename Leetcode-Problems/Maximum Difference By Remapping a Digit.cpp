class Solution
{
public:
    int minMaxDifference(int num)
    {
        string temp = to_string(num);
        string maxi = "", mini = "";
        char digit = ' ';
        for (char c : temp)
        {
            if (c != '9')
            {
                digit = c;
                break;
            }
        }
        for (char c : temp)
        {
            if (c == digit)
                maxi += '9';
            else
                maxi += c;
        }
        char ch = temp[0];
        for (char c : temp)
        {
            if (ch == c)
                mini += '0';
            else
                mini += c;
        }
        return stoi(maxi) - stoi(mini);
    }
};