#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int nextprime(int n){
    n++;
    while(true){
        int i;
        for(i=2;i<n;i++){
            if(n%i==0){
                break;
            }
        }
        if(i==n){
            return n;
        }
        n++;
    }
}

int main(){
    int a;
    cin>>a;
    cout<<nextprime(a);
    return 0;
}
