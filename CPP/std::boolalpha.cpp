#include <iostream>
using namespace std;

void utility(bool a){
    cout<<std::boolalpha;
    cout<<a;
}
int main(){
    int a;
    cin>>a;
    utility(a);
    return 0;
}
