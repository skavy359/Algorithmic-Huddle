/* Function to take input for 2D array elements
 * Note : Mention matrix in argument also.
 * N : size of matrix
 */
void twoDimensional(int **arr, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}