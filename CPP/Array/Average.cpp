int posAverage(int arr[], int size)
{

    // Write your code to find average of positive numbers in arr array
    // return the answer
    int sum = 0, n = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            sum += arr[i];
            n++;
        }
    }
    return sum / n;
}