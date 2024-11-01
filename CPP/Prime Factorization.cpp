#include <iostream>
using namespace std;

int primefactors(int a){
    for(int i=2;i<=a;i++){
        while(a%i==0){
            cout<<i<<" ";
            a=a/i;
        }
    }
    return 0;
}

int main(){
    int a;
    cin>>a;
    primefactors(a);
    return 0;
}
