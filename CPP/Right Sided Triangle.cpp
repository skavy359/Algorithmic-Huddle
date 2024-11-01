#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int s;
    cin>>s;
    for(int i=1;i<=s;i++){
        for(int j=i;j<=s;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
