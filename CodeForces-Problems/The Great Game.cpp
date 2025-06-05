#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int first = 0, second = 0;
    int len = a.length();
    for (int i = 0; i < len; i += 2)
    {
        string temp1, temp2;
        temp1 += a[i];
        temp1 += a[i + 1];
        temp2 += b[i];
        temp2 += b[i + 1];

        if (temp1 == "[]" && temp2 == "()")
        {
            first++;
        }
        else if (temp1 == "()" && temp2 == "()")
        {
            first++;
            second++;
        }
        else if (temp1 == "8<" && temp2 == "()")
        {
            second++;
        }
        else if (temp1 == "[]" && temp2 == "[]")
        {
            first++;
            second++;
        }
        else if (temp1 == "8<" && temp2 == "8<")
        {
            first++;
            second++;
        }
        else if (temp1 == "[]" && temp2 == "8<")
        {
            second++;
        }
        else if (temp1 == "()" && temp2 == "[]")
        {
            second++;
        }
        else if (temp1 == "()" && temp2 == "8<")
        {
            first++;
        }
        else if (temp1 == "8<" && temp2 == "[]")
        {
            first++;
        }
    }

    if (first > second)
    {
        cout << "TEAM 1 WINS" << endl;
    }
    else if (second > first)
    {
        cout << "TEAM 2 WINS" << endl;
    }
    else
    {
        cout << "TIE" << endl;
    }

    return 0;
}
