// User function Template for C++

/*
arr: insert the given array elements to vector
n: size of array
*/
vector<int> fillVector(int arr[], int n)
{
    // your code here
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = arr[i];
    }
    return ans;
}
