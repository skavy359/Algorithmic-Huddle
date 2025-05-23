#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int R;
    cin >> R;
    vector<int> ratings = {1200, 1400, 1600, 1900, 2100, 2300, 2400, 2600, 3000};

    for (int r : ratings)
    {
        if (r > R)
        {
            cout << r << endl;
            break;
        }
    }
    return 0;
}
