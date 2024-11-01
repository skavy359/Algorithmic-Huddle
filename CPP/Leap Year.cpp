#include <iostream>
#include <iomanip>
using namespace std;

void checkleapyear(int a){
    if(a%400==0){
        cout<<"Leap year";
    }
    else if(a%100==0){
        cout<<"Not a leap year";
    }
    else if(a%4==0){
        cout<<"Leap year";
    }
    else{
        cout<<"Not a leap year";
    }
}

int main(){
    int a;
    cin>>a;
    checkleapyear(a);
    return 0;
}




