class Solution {
public:
    double average(vector<int>& salary) {
        int max = INT_MIN;
        int min = INT_MAX;
        long long sum = 0;
        for (int i = 0; i < salary.size(); i++) {
            if (salary[i] > max)
                max = salary[i];
            if (salary[i] < min)
                min = salary[i];
            sum += salary[i];
        }

        sum -= (max + min);

        return static_cast<double>(sum) / (salary.size() - 2);
    }
};
