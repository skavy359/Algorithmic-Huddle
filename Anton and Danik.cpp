#include <iostream>
using namespace std;

int main(){
    int b;
    cin>>b;
    string a;
    cin>>a;

    int anton=0;
    int danik=0;
    for(int i=0;i<b;i++){
        if(a[i]=='A'){
            anton++;
        }
        else{
            danik++;
        }
    }
    
    if(anton>danik){
        cout<<"Anton";
    }
    else if(danik>anton){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}
