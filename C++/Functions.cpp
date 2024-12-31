#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Maximum(int a,int b,int c,int d){
    if(a>b && a>c && a>d) cout<<a<<endl;
    else if(b>a && b>c && b>d) cout<<b<<endl;
    else if(c>a && c>b && c>d) cout<<c<<endl;
    else if(d>a && d>b && d>c) cout<<d<<endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    Maximum(a,b,c,d);
    return 0;
}
