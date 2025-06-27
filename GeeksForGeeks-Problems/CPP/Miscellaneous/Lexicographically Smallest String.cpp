// Back-end complete function Template for C++

string lexi_string(string s)
{
    string s1;
    s1 = s + s;
    int ans = 0;
    int i;
    int n;
    n = s.size();
    for (i = 1; i < n; i++)
    {
        int c = 0;
        int cur;
        int j;
        cur = ans;
        j = i;
        int f = 0;
        while (c < n)
        {
            if (s1[j] < s1[cur])
            {
                f = 1;
                break;
            }
            if (s1[cur] < s1[j])
            {
                f = 0;
                break;
            }
            cur++;
            j++;
            c++;
        }
        if (f == 1)
        {
            ans = i;
        }
    }
    string w = "";
    for (int k = ans; k < ans + n; k++)
    {
        w += s1[k];
    }
    return w;
}
