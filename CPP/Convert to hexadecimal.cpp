#include <iostream>
using namespace std;

void DecToHex(int a){
    cout<<std::hex;
    cout<<a;
}

int main(){
    int a;
    cin>>a;
    DecToHex(a);
    return 0;
}
