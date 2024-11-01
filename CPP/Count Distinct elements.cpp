#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int countdistinct(int n, int arr[]){
    int count=n;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count--;
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
    sort(arr,arr+n);
    cout<<countdistinct(n,arr);
    return 0;
}

