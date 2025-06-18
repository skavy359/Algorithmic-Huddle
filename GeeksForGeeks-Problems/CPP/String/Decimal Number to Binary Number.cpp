// User function Template for C++

string toBinary(int n)
{
    // Your code here
    string ans = "";
    while (n > 0)
    {
        int rem = n % 2;
        ans += (rem + '0');
        n /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}