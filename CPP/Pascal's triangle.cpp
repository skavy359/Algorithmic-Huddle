#include <iostream>
using namespace std;

void printPascalsTriangle(int n) {
    for (int line = 0; line < n; line++) {
        for (int space = 0; space < n - line - 1; space++) {
            cout << "  ";
        }

        int value = 1;
        for (int i = 0; i <= line; i++) {
            cout << value << "   ";
            value = value * (line - i) / (i + 1);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPascalsTriangle(n);
    return 0;
}
