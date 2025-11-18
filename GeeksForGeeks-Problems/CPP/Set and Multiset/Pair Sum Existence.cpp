int sumExists(int arr[], int n, int sum)
{

    // code here
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(arr[i]);
    for (int i = 0; i < n; i++)
    {
        int rem = sum - arr[i];
        if (st.count(rem) && rem != arr[i])
        {
            return 1;
        }
    }
    return 0;
}