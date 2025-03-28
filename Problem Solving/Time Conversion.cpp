#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    int hour = (s[0] - '0') * 10 + (s[1] - '0');
    bool isPM = (s[8] == 'P');
    if (isPM)
    {
        if (hour != 12)
        {
            hour += 12;
        }
    }
    else
    {
        if (hour == 12)
        {
            hour = 0;
        }
    }
    stringstream result;
    result << setw(2) << setfill('0') << hour << s.substr(2, 6);
    return result.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
