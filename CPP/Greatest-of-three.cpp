#include <iostream>
#include <iomanip>
using namespace std;

int greatestofthree(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else if(c>a && c>b){
        return c;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<greatestofthree(a,b,c);
    return 0;
}
