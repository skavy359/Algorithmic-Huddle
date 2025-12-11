multimap<int, int> multimapInsert(vector<int> &arr)
{
    multimap<int, int> mp;
    // Insert arr[i] as key and i as value in the multimap
    for (int i = 0; i < arr.size(); i++)
    {
        mp.insert({arr[i], i});
    }
    return mp;
}

void multimapDisplay(multimap<int, int> mp)
{
    // Print the keys and value pairs in new line
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
}

void multimapErase(multimap<int, int> &mp, int x)
{
    // If and else condition to erase x from the multimap
    if (mp.find(x) != mp.end())
    {
        mp.erase(x);
        cout << "erased " << x;
    }
    else
        cout << "not found";

    cout << endl;
}