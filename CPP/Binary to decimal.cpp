#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int bintodec(long long int a){
    int rem;
    int res=0,i=0;
    while(a>0){
        rem=a%10;
        res=res+rem*pow(2,i);
        a=a/10;
        i++;
    }
    return res;
}

int main(){
    long long int a;
    cin>>a;
    cout<<bintodec(a);
    return 0;
}
