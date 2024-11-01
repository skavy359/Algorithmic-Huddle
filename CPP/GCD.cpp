#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int gcd(int a,int b){
    int len;
    int res;

    if(a<b){
        len=a;
    }
    else{
        len=b;
    }

    for(int i=1;i<len;i++){
        if(a%i==0 && b%i==0){
            res=i;
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
