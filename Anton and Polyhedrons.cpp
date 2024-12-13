#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == "Tetrahedron")
        {
            total += 4;
        }
        else if (arr[i] == "Cube")
        {
            total += 6;
        }
        else if (arr[i] == "Octahedron")
        {
            total += 8;
        }
        else if (arr[i] == "Dodecahedron")
        {
            total += 12;
        }
        else if (arr[i] == "Icosahedron")
        {
            total += 20;
        }
    }

    cout << total << endl;
    return 0;
}
