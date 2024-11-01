#include <iostream>
using namespace std;

int search(int n,int arr[],int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int x;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    cout<<search(n,arr,x);
    return 0;
}

