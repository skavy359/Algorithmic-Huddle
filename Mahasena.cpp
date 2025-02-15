#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int odd=0,even=0;
    for(int i : arr){
        if(i%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even>odd){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else{
        cout<<"NOT READY"<<endl;
    }
    return 0;
}
