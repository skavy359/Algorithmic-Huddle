// User function Template for C++

/*
str: string containing english alphabet letters
*/
bool checkPangram(string str)
{
    // your code here
    if (str.length() < 26)
        return false;
    int arr[26] = {0};
    for (char c : str)
    {
        char temp = tolower(c);
        arr[temp - 'a']++;
    }
    for (int i : arr)
    {
        if (i == 0)
            return false;
    }
    return true;
}
