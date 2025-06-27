class Solution
{
public:
    int convertTime(string current, string correct)
    {
        int correct_time =
            stoi(correct.substr(0, 2)) * 60 + stoi(correct.substr(3));
        int current_time =
            stoi(current.substr(0, 2)) * 60 + stoi(current.substr(3));
        int time_diff = correct_time - current_time;
        int ans = 0;
        ans += time_diff / 60;
        time_diff %= 60;
        ans += time_diff / 15;
        time_diff %= 15;
        ans += time_diff / 5;
        time_diff %= 5;
        ans += time_diff / 1;
        time_diff %= 1;
        return ans;
    }
};