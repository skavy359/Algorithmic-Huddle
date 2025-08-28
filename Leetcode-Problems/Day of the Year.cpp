class Solution
{
public:
    bool check(int n)
    {
        if (n % 4 == 0)
        {
            if (n % 100 == 0)
            {
                return n % 400 == 0;
            }
            return true;
        }
        return false;
    }
    int dayOfYear(string date)
    {
        int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month = stoi(date.substr(5, 2)), day = stoi(date.substr(8, 2));
        if (check(stoi(date.substr(0, 4))))
            arr[1] = 29;
        for (int i = 0; i < month - 1; i++)
        {
            day += arr[i];
        }
        return day;
    }
};

// ANOTHER SOLUTION
class Solution
{
public:
    bool check(int n)
    {
        if (n % 4 == 0)
        {
            if (n % 100 == 0)
            {
                return n % 400 == 0;
            }
            return true;
        }
        return false;
    }
    int dayOfYear(string date)
    {
        int arr[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
        int month = stoi(date.substr(5, 2)), day = stoi(date.substr(8, 2));
        int ans = arr[month - 1] + day;
        if (check(stoi(date.substr(0, 4))) && month > 2)
            ans++;
        return ans;
    }
};