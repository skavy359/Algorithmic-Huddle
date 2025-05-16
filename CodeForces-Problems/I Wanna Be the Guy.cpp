#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p, q;
    cin >> p;
    int arr1[p];
    for (int i = 0; i < p; i++)
    {
        cin >> arr1[i];
    }
    cin >> q;
    int arr2[q];
    for (int i = 0; i < q; i++)
    {
        cin >> arr2[i];
    }
    set<int> ans(arr1, arr1 + p);
    ans.insert(arr2, arr2 + q);
    if (ans.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}