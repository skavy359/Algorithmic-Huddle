#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool checkprime(int n){
    bool res=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            res=false;
            break;
        }
    }
    return res;
}

int main(){
    int a;
    cin>>a;
    cout<<boolalpha<<checkprime(a);
    return 0;
}
