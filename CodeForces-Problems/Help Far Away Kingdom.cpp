#include <iostream>
#include <string>
using namespace std;

string add_one(string num)
{
    int n = num.size();
    for (int i = n - 1; i >= 0; --i)
    {
        if (num[i] < '9')
        {
            num[i]++;
            return num;
        }
        else
        {
            num[i] = '0';
        }
    }
    return "1" + num;
}

int main()
{
    string s;
    cin >> s;

    size_t dot_pos = s.find('.');
    string integer_part = s.substr(0, dot_pos);
    string fractional_part = s.substr(dot_pos + 1);

    if (integer_part.back() == '9')
    {
        cout << "GOTO Vasilisa." << endl;
        return 0;
    }

    if (fractional_part[0] >= '5')
    {
        cout << add_one(integer_part) << endl;
    }
    else
    {
        cout << integer_part << endl;
    }

    return 0;
}
