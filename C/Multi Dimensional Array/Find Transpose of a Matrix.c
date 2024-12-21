//User function Template for C

void transpose(int N, int matrix[][N])
{ 
    //code here
    for(int i = 0; i<N; i++){
        for(int j = 0; j<=i; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    
} 
