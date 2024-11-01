#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void divisors(int s){
    for(int i=1;i<=s;i++){
        if(s%i==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int s;
    cin>>s;
    divisors(s);
    return 0;
}
