#include <iostream>
using namespace std;

int factorial(int a){
    int product=1;
    while(a>0){
        product=product*a;
        a--;
    }
    return product;
}

int main(){
    int a;
    cin>>a;
    cout<<factorial(a);
    return 0;
}
