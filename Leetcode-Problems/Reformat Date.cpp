class Solution
{
public:
    string reformatDate(string date)
    {
        string year = "";
        int i = date.length() - 1;
        for (int j = 0; j < 4; j++)
        {
            year += date[i];
            i--;
        }
        i--;
        reverse(year.begin(), year.end());
        string month = "";
        for (int j = 0; j < 3; j++)
        {
            month += date[i];
            i--;
        }
        i--;
        reverse(month.begin(), month.end());
        unordered_map<string, string> monthIndex = {
            {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}};
        auto it2 = monthIndex.find(month);
        month = it2->second;
        string day = "";
        if (date[0] > '3')
        {
            day += '0';
            day += date[0];
        }
        else if (date[0] <= '3' && isalpha(date[1]))
        {
            day += '0';
            day += date[0];
        }
        else
        {
            day += date[0];
            day += date[1];
        }
        string ans = "";
        ans += year;
        ans += "-";
        ans += month;
        ans += "-";
        ans += day;
        return ans;
    }
};