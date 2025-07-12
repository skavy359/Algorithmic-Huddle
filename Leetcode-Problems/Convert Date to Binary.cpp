class Solution
{
public:
    string convertDateToBinary(string date)
    {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        string Year = "";
        while (year > 0)
        {
            int rem = year % 2;
            Year += (rem + '0');
            year /= 2;
        }
        reverse(Year.begin(), Year.end());
        string Month = "";
        while (month > 0)
        {
            int rem = month % 2;
            Month += (rem + '0');
            month /= 2;
        }
        reverse(Month.begin(), Month.end());
        string Day = "";
        while (day > 0)
        {
            int rem = day % 2;
            Day += (rem + '0');
            day /= 2;
        }
        reverse(Day.begin(), Day.end());
        string ans = "";
        ans += Year;
        ans += "-";
        ans += Month;
        ans += "-";
        ans += Day;
        return ans;
    }
};