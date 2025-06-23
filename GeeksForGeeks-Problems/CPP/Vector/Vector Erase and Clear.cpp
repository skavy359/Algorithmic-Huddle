// User function Template for C++

void eraseAt(vector<int> &arr, int pos)
{
    // your code here
    arr.erase(arr.begin() + pos);
}

void eraseInRange(vector<int> &arr, int start, int end)
{

    // your code here
    arr.erase(arr.begin() + start, arr.begin() + end);
}

void clearAll(vector<int> &arr)
{
    // your code here
    arr.clear();
}