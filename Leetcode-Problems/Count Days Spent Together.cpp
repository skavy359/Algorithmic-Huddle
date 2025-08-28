class Solution
{
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob)
    {
        int month_arrive_alice = stoi(arriveAlice.substr(0, 2)),
            month_leave_alice = stoi(leaveAlice.substr(0, 2));
        int month_arrive_bob = stoi(arriveBob.substr(0, 2)),
            month_leave_bob = stoi(leaveBob.substr(0, 2));
        int day_arrive_alice = stoi(arriveAlice.substr(3, 2)),
            day_leave_alice = stoi(leaveAlice.substr(3, 2));
        int day_arrive_bob = stoi(arriveBob.substr(3, 2)),
            day_leave_bob = stoi(leaveBob.substr(3, 2));
        int arr[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
        int aliceArrival = arr[month_arrive_alice - 1] + day_arrive_alice;
        int aliceLeave = arr[month_leave_alice - 1] + day_leave_alice;
        int bobArrival = arr[month_arrive_bob - 1] + day_arrive_bob;
        int bobLeave = arr[month_leave_bob - 1] + day_leave_bob;
        int ans = 0;
        while (aliceArrival <= aliceLeave)
        {
            if (bobArrival <= aliceArrival && aliceArrival <= bobLeave)
            {
                ans++;
            }
            aliceArrival += 1;
        }
        return ans;
    }
};