#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int s;
    cin>>s;
    for(int i=s;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}
