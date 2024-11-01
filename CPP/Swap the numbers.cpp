#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}
