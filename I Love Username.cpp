#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;
    int max=arr[0];
    int min=arr[0];

    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            ans++;
        }
        if(arr[i]<min){
            min=arr[i];
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
