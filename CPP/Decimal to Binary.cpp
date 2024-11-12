#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int dectobin(int a){
    int rem;
    long long int res=0;
    int i=0;

    while(a>0){
        rem=a%2;
        res=res+(rem*pow(10,i));
        a=a/2;
        i++;
    }
    return res;
}

int main(){
    int a;
    cin>>a;
    cout<<dectobin(a);
    return 0;
}
