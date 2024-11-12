#include <iostream>
#include <cmath>
using namespace std;

int average(int n,int arr[]){
    int average;
    int sum=0,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0) {
            sum = sum + arr[i];
            count++;
        }
    }
    average= floor((float)sum/count);
    return average;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<average(n,arr);
    return 0;
}

