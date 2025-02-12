#include <iostream>

#include <algorithm>

#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = 0;
        int temp = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] <= arr[i + 1]) {
                temp++;
                ans = max(ans, temp);
            }
            else {
                temp = 0;
            }
        }

        int sahi = ans;
        int changekebaad = 0;
        for (int i = 0; i < n; i++) {
            int res[n];
            for (int j = 0; j < n; j++) {
                res[j] = arr[j];
            }
            res[i] *= x;
            int temp = 0;
            int baaki = 0;
            for (int j = 0; j < n - 1; j++) {
                if (res[j] <= res[j + 1]) {
                    temp++;
                    baaki = max(baaki, temp);
                }
                else {
                    temp = 0;
                }
            }
            changekebaad = max(changekebaad, baaki);
        }
        int final = max(sahi, changekebaad);
        cout << final+1 << endl;
    }
    return 0;
}