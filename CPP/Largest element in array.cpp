#include <iostream>
#include <cmath>
using namespace std;

int largest(int n,int arr[]){
    int l=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            l=arr[i+1];
        }
    }
    return l;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largest(n,arr);
    return 0;
}

