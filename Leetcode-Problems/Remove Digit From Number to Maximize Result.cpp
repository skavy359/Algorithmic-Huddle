class Solution
{
public:
    string removeDigit(string number, char digit)
    {
        for (int i = 0; i < number.length() - 1; i++)
        {
            if (number[i] == digit && number[i] < number[i + 1])
            {
                return number.substr(0, i) + number.substr(i + 1);
            }
        }
        int finding = number.rfind(digit);
        return number.substr(0, finding) + number.substr(finding + 1);
    }
};

// Another Solution but little inefficient
class Solution
{
public:
    string removeDigit(string number, char digit)
    {
        string ans = "";
        for (int i = 0; i < number.length(); i++)
        {
            if (number[i] == digit)
            {
                string temp = number.substr(0, i) + number.substr(i + 1);
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};