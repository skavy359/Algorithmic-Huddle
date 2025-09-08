class Solution
{
public:
    long long dividePlayers(vector<int> &skill)
    {
        sort(skill.begin(), skill.end());
        int i = 0, j = skill.size() - 1;
        long long sum = skill[i] + skill[j];
        long long ans = skill[i] * skill[j];
        i++, j--;
        while (i < j)
        {
            long long temp = skill[i] + skill[j];
            if (temp != sum)
                return -1;
            else
            {
                ans += (skill[i] * skill[j]);
            }
            i++, j--;
        }
        return ans;
    }
};