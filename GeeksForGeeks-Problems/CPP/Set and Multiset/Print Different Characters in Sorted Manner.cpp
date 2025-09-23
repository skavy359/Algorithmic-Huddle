// User function Template for C++

// Complete this function
string Sorted_Characters(string s)
{
    // Your Code Here
    set<char> st(s.begin(), s.end());
    string ans = "";
    for (char c : st)
        ans += c;
    return ans;
}
