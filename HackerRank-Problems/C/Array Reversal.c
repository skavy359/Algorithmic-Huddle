#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *arr,int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    reverse_array(arr,num);
    
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
