#include <iostream>
using namespace std;

void decrease(int x){
    while(x>=0){
        cout<<x<<" ";
        x--;
    }
}

int main(){
    int n;
    cin>>n;
    decrease(n);
    return 0;
}
