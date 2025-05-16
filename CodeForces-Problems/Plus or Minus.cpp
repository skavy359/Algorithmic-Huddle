#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c;
    while(n--){
        cin>>a>>b>>c;
        if(a+b==c){
            cout<<"+"<<endl;
        }
        else if(a-b==c){
            cout<<"-"<<endl;
        }
    }
    return 0;
}
