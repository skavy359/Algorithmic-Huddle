// User function Template for C++

/*
array_of_Pairs(arr, n, res, m): function has arr[]: contains elements of given array
n: sze of array
res: stores the pair of integers
m: size of res.
*/
void arrayOfPairs(int arr[], int n, pair<int, int> res[], int m)
{
    // code here
    for (int i = 0; i <= n / 2; i++)
    {
        res[i] = {arr[i], arr[n - i - 1]};
    }
}
