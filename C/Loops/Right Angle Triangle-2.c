//User function Template for C

void triangle(int s){
    int count = s;
    for(int i = 0; i < s; i++){
        if(i == 0) {
            printf("*");
        }
        else if(i == s-1){
            count = s;
            while(count-- > 0){
                printf("* ");
            }
        }
        else{
            count = 2 * i;
            printf("*");
            while(count-- > 0){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

