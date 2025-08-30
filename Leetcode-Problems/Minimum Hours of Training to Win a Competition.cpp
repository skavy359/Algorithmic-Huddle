class Solution
{
public:
    int minNumberOfHours(int initialEnergy, int initialExperience,
                         vector<int> &energy, vector<int> &experience)
    {
        int sum = accumulate(energy.begin(), energy.end(), 0);
        int training_hours = max(0, sum - initialEnergy + 1);
        for (int i = 0; i < experience.size(); i++)
        {
            if (initialExperience <= experience[i])
            {
                int diff = experience[i] - initialExperience + 1;
                training_hours += diff;
                initialExperience += diff;
            }
            initialExperience += experience[i];
        }
        return training_hours;
    }
};