class Solution
{
public:
    bool isVowel(char c)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }

    string sortVowels(string s)
    {
        vector<char> arr;
        for (char c : s)
        {
            if (isVowel(c))
                arr.push_back(c);
        }
        sort(arr.begin(), arr.end());
        int i = 0;
        string ans = "";
        for (char &c : s)
        {
            if (isVowel(c))
            {
                c = arr[i];
                i++;
            }
        }
        return s;
    }
};