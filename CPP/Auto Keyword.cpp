#include <iostream>
using namespace std;

auto add(auto a, auto b){
    return a+b;
}

int main(){
    int a;
    float b;
    cin>>a;
    cin>>b;
    auto result= add(a,b);
    cout<<result;
    return 0;
}
