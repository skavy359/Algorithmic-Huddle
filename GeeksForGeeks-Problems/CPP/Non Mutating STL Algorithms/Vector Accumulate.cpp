// User function Template for C++

// Complete this function

int vAccu(vector<int> v, int n)
{
    // Your code here
    int ans = accumulate(v.begin(), v.end(), 0);
    return ans;
}