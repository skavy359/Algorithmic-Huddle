//User function Template for C

void utility(int a, int b, int c){
    //Do a^a below
    int d= a^a;
    //Do c^b below
    int e=c^b;
    //Do a&b below
    int f=a&b;
    //Do c|(a^a) below
    int g=c|(a^a);
    //Do ~e below
    e=~e;

     //The line below prints the output. Don't change it!
    printf("%d %d %d %d \n", d, e, f, g);
}
