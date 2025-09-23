set<int> setInsert(int arr[], int n)
{
    // code here
    set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(arr[i]);
    return st;
}

void setDisplay(set<int> &s)
{
    for (int i : s)
        cout << i << " ";
    cout << endl;
}

void setErase(set<int> &s, int x)
{
    // code here
    if (s.find(x) != s.end())
    {
        s.erase(x);
        cout << "erased " << x;
    }
    else
        cout << "not found";
    cout << endl;
}