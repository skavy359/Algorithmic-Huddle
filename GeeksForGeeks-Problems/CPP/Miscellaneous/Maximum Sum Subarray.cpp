// Back-end complete function Template for C++

long maximum_subarray(vector<int> v)
{
    long ans = 0;
    int n;
    n = v.size();

    int left[n + 1];

    int right[n + 2];
    left[0] = 0;
    right[n + 1] = 0;

    int max_so_far = INT_MIN, max_ending_here = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + v[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;

        left[i + 1] = max_ending_here;
    }
    max_so_far = INT_MIN;
    max_ending_here = 0;

    for (i = n - 1; i >= 0; i--)
    {
        max_ending_here = max_ending_here + v[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;

        right[i + 1] = max_ending_here;
    }

    for (i = 1; i <= n; i++)
    {
        ans = max(ans, ll(v[i - 1] * v[i - 1] + left[i - 1] + right[i + 1]));
    }

    return ans;
}
