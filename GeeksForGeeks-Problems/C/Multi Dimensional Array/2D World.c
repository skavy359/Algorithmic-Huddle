//User function Template for C

/* Function to take input for 2D array elements
* N : size of matrix
*/
void twoDimensional(int N, int mat[][N]){
    
    //code here
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
}
