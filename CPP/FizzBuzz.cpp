#include <iostream>
#include <iomanip>
using namespace std;

void FizzBuzz(int a){
    if(a%3==0){
        if(a%5==0){
            cout<<"FizzBuzz";
        }
        else{
            cout<<"Fizz";
        }
    }
    else if(a%5==0){
        cout<<"Buzz";
    }
    else{
        cout<<a;
    }
}

int main(){
    int a;
    cin>>a;
    FizzBuzz(a);
    return 0;
}


