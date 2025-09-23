void printPermutation(string str)
{
    // your code here
    sort(str.begin(), str.end());

    do
    {
        cout << str << " ";
    } while (next_permutation(str.begin(), str.end()));
}
