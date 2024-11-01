#include <iostream>
using namespace std;

int firstdigit(int a){
    int ans;
    while(a>0){
        ans=a%10;
        a=a/10;
    }
    return ans;
}

int main(){
    int a;
    cin>>a;
    cout<<firstdigit(a);
    return 0;
}


