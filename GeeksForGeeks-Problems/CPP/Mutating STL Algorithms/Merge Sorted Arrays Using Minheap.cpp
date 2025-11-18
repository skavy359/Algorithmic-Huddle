// User function Template for C++

// Function to merge two sorted arrays in
// constant space

void mergeArrays(int *a, int n, int *b, int m)
{
    // Your code here
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
        pq.push(a[i]);
    for (int i = 0; i < m; i++)
        pq.push(b[i]);
    for (int i = 0; i < n; i++)
    {
        a[i] = pq.top();
        pq.pop();
    }
    for (int i = 0; i < m; i++)
    {
        b[i] = pq.top();
        pq.pop();
    }
}