//User function Template for C

int *getArray(int n)
{
    int* ptr = malloc(n*sizeof(int));//allocate memory dynamically here
    //code here
    for(int i=0;i<n;i++){
        ptr[i]=1;
    }
    
    return ptr;
    
}
