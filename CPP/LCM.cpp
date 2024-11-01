#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int gcd(int a,int b){
    int len;
    int res;

    if(a>b){
        len=a;
    }
    else{
        len=b;
    }

    for(int i=len;i<a*b;i++){
        if(i%a==0 && i%b==0){
            res=i;
            break;
        }
    }
    return res;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
