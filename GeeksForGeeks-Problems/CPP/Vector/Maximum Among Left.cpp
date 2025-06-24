// User function Template for C++

vector<int> maximum_from_left(vector<int> V)
{
    int n = V.size();
    vector<int> result;

    if (n == 0)
    {
        return result;
    }

    int max_so_far = V[0];

    for (int i = 1; i < n; ++i)
    {
        if (V[i] > max_so_far)
        {
            result.push_back(i);
            max_so_far = V[i];
        }
    }
    return result;
}
