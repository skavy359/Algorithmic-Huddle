#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        string ans = "";

        for (int i = 0; i < x / 2; i++) {
            ans = ans + '1';
        }
        for (int i = 0; i < y / 2; i++) {
            ans = ans + '2';
        }
        for (int i = 0; i < y / 2; i++) {
            ans = ans + '2';
        }
        for (int i = 0; i < x / 2; i++) {
            ans = ans + '1';
        }
        cout << ans << endl;
    }
    return 0;
}