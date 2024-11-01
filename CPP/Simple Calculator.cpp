#include <iostream>
#include <iomanip>
using namespace std;

void calculator(int a,int b, char c){
    switch(c){
        case'+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        case '%':
            cout<<a%b;
        default:
            cout<<"Operation not available right now";
    }
}

int main(){
    int a,b;
    char c;
    cin>>a>>b>>c;
    calculator(a,b,c);
    return 0;
}




