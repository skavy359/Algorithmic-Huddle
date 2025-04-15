#include <bits/stdc++.h>
using namespace std;

bool check(string word)
{
    for (char c : word)
    {
        if (!isupper(c))
            return false;
    }
    return true;
}

string task(string word)
{
    if (check(word))
        return word;
    string result = word;
    result[0] = toupper(result[0]);
    for (int i = 1; i < result.size(); i++)
    {
        result[i] = tolower(result[i]);
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        vector<string> result;

        while (ss >> word)
        {
            result.push_back(task(word));
        }

        for (int i = 0; i < result.size(); i++)
        {
            if (i > 0)
                cout << " ";
            cout << result[i];
        }
        cout << endl;
    }
    return 0;
}
