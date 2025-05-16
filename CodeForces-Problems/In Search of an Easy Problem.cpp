#include <iostream>
using namespace std;

int main(){
    int n;
    int res=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            res=0;
        }
        else{
            res=1;
            break;
        }
    }
    if(res==1){
        cout<<"hard";
    }
    else{
        cout<<"easy";
    }

    return 0;
}
