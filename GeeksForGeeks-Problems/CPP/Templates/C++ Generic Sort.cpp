// User function Template for C++

template <class T>
void sortArray(T arr[], int n)
{
    // Add your code here.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    }
}

template <class T>
void printArray(T arr[], int n)
{
    // Add your code here.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
