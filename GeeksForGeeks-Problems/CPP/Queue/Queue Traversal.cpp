// User function Template for C++

// Complete the function
void TraveseMe(queue<int> q)
{

    // Your code here
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }
}
