//User function Template for C

void invTriangleWall(int s){
    
    //Write your code here
    for(int i=1;i<=s;i++){
        for(int j=1;j<=s-i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    
}
