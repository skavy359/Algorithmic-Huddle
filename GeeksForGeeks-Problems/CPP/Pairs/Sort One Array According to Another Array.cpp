// User function Template for C++

void sortArray(int a[], char b[], int n)
{
    pair<int, char> res[n];
    for (int i = 0; i < n; i++)
    {
        res[i] = {a[i], b[i]};
    }
    sort(res, res + n);
    for (int i = 0; i < n; i++)
    {
        b[i] = res[i].second;
    }
}
