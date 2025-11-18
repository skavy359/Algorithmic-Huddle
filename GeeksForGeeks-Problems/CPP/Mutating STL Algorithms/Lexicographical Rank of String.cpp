// User function Template for C++

// Complete the function
int RankMe(string str)
{

    // Your code here
    string temp = str;
    sort(str.begin(), str.end());
    int count = 1;
    do
    {
        if (str == temp)
        {
            return count;
        }
        count++;
    } while (next_permutation(str.begin(), str.end()));
    return count;
}
