/*Complete the function below*/
void multiply(int A[][100], int B[][100], int C[][100], int N)
{
      //add code here.
      int i, j, k;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			C[i][j] = 0;
			for (k = 0; k < N; k++)
				C[i][j] += A[i][k] * B[k][j];
		}
	}
}
