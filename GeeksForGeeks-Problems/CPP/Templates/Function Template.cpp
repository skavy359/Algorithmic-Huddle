// User function Template for C++

template <class T>
T largest(T arr[], int n)
{
    T res = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i]);
    }
    return res;
}