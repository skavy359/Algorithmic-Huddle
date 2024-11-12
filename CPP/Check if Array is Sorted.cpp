#include <iostream>
using namespace std;

void checksort(int n,int arr[]){
    int ans=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            ans=0;
            break;
        }
    }
    if(ans==0){
        cout<<"Not sorted";
    }
    else if(ans==1){
        cout<<"Sorted";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    checksort(n,arr);
    return 0;
}

