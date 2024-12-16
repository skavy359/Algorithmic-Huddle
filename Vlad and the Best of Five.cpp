#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string a;
        cin >> a;

        int count_A = 0, count_B = 0;

        for (int i = 0; i < 5; i++)
        {
            if (a[i] == 'A')
                count_A++;
            else
                count_B++;
        }

        if (count_A > count_B)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}
