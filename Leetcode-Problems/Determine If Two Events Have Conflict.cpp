class Solution
{
public:
    bool haveConflict(vector<string> &event1, vector<string> &event2)
    {
        int hour1 = stoi(event1[0].substr(0, 2)),
            hour2 = stoi(event1[1].substr(0, 2));
        int hour3 = stoi(event2[0].substr(0, 2)),
            hour4 = stoi(event2[1].substr(0, 2));
        int min1 = stoi(event1[0].substr(3, 2)),
            min2 = stoi(event1[1].substr(3, 2));
        int min3 = stoi(event2[0].substr(3, 2)),
            min4 = stoi(event2[1].substr(3, 2));
        int time1 = hour1 * 60 + min1, time2 = hour2 * 60 + min2,
            time3 = hour3 * 60 + min3, time4 = hour4 * 60 + min4;
        return (time1 <= time4 && time3 <= time2);
    }
};