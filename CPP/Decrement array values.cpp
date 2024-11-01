#include <iostream>
using namespace std;

int decrement(int n, int arr[]){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-1;
    }
    return arr[n];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    decrement(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

