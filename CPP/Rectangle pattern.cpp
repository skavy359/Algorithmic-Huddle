#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c;
    cin>>c;

    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
