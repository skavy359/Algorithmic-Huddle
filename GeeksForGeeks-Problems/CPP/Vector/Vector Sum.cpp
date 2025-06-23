// User function Template for C++

// Complete the function
int sumMe(vector<int> arr, int n)
{

    // Your code here
    // Use accumulate function
    int sum = accumulate(arr.begin(), arr.end(), 0);
    return sum;
}
