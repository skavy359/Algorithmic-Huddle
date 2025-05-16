#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int ans1=0,ans2=0,ans3=0;
    int max1=0,max2=0,max3=0;
    
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            ans1=i&j;
            ans2=i|j;
            ans3=i^j;
            
        if(ans1>max1 && ans1<k) max1=ans1;
        if(ans2>max2 && ans2<k) max2=ans2;
        if(ans3>max3 && ans3<k) max3=ans3;
        }
    }
    printf("%d\n%d\n%d",max1,max2,max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
