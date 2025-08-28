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

    int daysBetweenDates(string date1, string date2)
    {
        int y1 = stoi(date1.substr(0, 4)), y2 = stoi(date2.substr(0, 4));
        int m1 = stoi(date1.substr(5, 2)), m2 = stoi(date2.substr(5, 2));
        int d1 = stoi(date1.substr(8, 2)), d2 = stoi(date2.substr(8, 2));
        int months[12] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
        int days1 = 0;
        for (int i = 1971; i < y1; i++)
        {
            if (check(i))
                days1 += 366;
            else
                days1 += 365;
        }
        for (int i = 1; i < m1; i++)
        {
            days1 += months[i];
        }
        days1 += d1;
        int days2 = 0;
        for (int i = 1971; i < y2; i++)
        {
            if (check(i))
                days2 += 366;
            else
                days2 += 365;
        }
        for (int i = 1; i < m2; i++)
        {
            days2 += months[i];
        }
        days2 += d2;
        if (check(y1) && m1 > 2)
            days1++;
        if (check(y2) && m2 > 2)
            days2++;
        return abs(days1 - days2);
    }
};