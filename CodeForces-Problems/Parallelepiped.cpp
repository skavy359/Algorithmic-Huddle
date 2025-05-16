#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int sum= sqrt((a*b)/c)+sqrt((a*c)/b)+sqrt((b*c)/a);
    cout<<4*sum;
    return 0;
}
