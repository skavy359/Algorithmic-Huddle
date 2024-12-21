// User function Template for C

bool arraySortedOrNot(int arr[], int n) {

    // code here
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
        if(n==0){
            return true;
        }
    }
    return true;
}
