#include <iostream>
using namespace std;

void fun(auto a){
    cout<< typeid(a).name();
}
int main(){
    int ip;
    cin>>ip;
    if(ip==1){
        int a;
        cin>>a;
        fun(a);
    }
    else if(ip==2){
        float a;
        cin>>a;
        fun(a);
    }
    else if(ip==3){
        double a;
        cin>>a;
        fun(a);
    }

    return 0;
}
