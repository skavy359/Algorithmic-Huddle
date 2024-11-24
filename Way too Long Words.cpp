#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    while(a--){
        string b;
        cin>>b;
        int count=0;
        if(b.length()>10){
            cout<<b[0]<<b.length()-2<<b[b.length()-1]<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    return 0;
}
