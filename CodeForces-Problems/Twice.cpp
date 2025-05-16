#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            freq[num]++;
        }

        int score = 0;
        for (int i = 1; i <= n; i++)
        {
            score += freq[i] / 2;
        }

        cout << score << endl;
    }

    return 0;
}
