//User function Template for C

int search(int arr[], int n, int x)
{
    int i;
    
    // iterate over the array elements
    for (i=0; i<n; i++)
    {
        // check if the element is equal to x
        if (arr[i] == x)
            return i;
    }
    return -1;
}
