//User function Template for C

void toBinary(int N)
{
    // your code here
     int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (N > 0) {
        // storing remainder in binary array
        binaryNum[i] = N % 2;
        N = N / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--){
        printf("%d", binaryNum[j]);
}
        
}
