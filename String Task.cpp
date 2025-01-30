#include <iostream>
using namespace std;

bool is_vowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');
}

int main()
{
    string str;
    cin >> str;
    string ans = "";
    for (char ch : str)
    {
        if (!is_vowel(ch))
        {
            ans += '.';
            ans += tolower(ch);
        }
    }
    cout << ans << endl;
    return 0;
}