class Solution
{
public:
    int numberOfAlternatingGroups(vector<int> &colors)
    {
        int ans = 0;
        int n = colors.size();
        for (int i = 0; i < n; i++)
        {
            // if (i == 0) {
            //     if (colors[0] != colors[n - 1] && colors[0] != colors[1])
            //         ans++;
            // } else if (i == n - 1) {
            //     if (colors[n - 1] != colors[n - 2] &&
            //         colors[n - 1] != colors[0])
            //         ans++;
            // } else if (colors[(i) % n] != colors[(i - 1) % n] &&
            //            colors[(i) % n] != colors[(i + 1) % n])
            //     ans++;
            int prev = colors[(i - 1 + n) % n];
            int next = colors[(i + 1) % n];
            if (colors[i] != prev && colors[i] != next)
                ans++;
        }
        return ans;
    }
};