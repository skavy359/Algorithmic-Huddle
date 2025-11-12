#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int k = 5;
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(a), pq.push(b), pq.push(c);
        while (k--)
        {
            int t = pq.top();
            pq.pop();
            t++;
            pq.push(t);
        }
        int ans = 1;
        while (!pq.empty())
        {
            ans *= pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}