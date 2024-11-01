#include <iostream>
using namespace std;

int countzeroes(int n,int arr[]){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<countzeroes(n,arr);
    return 0;
}

