#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int fibonacci(int n){
    int a=1,b=1,c=0;
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

void printfibo(int n){
    int a=1,b=1,c=0;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
}

int main(){
    int a;
    cin>>a;
    cout<<fibonacci(a)<<endl;
    printfibo(a);
    return 0;
}
