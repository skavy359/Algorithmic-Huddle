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
    string dayOfTheWeek(int day, int month, int year)
    {
        vector<string> days = {"Sunday", "Monday", "Tuesday", "Wednesday",
                               "Thursday", "Friday", "Saturday"};
        int months[12] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
        if (check(year))
            months[2] = 29;
        int ans = 4;
        for (int i = 1971; i < year; i++)
        {
            if (check(i))
                ans += 366;
            else
                ans += 365;
        }
        for (int i = 1; i < month; i++)
        {
            ans += months[i];
        }
        ans += day;
        return days[ans % 7];
    }
};