#include <iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;

    for(int i=0;i<a.length();i++){
        a[i]=char(tolower(a[i]));
        b[i]=char(tolower(b[i]));
    }
    for(int i=0;i<a.length();i++){
        if(a[i]<b[i]){
            cout<<"-1";
            return 0;
        }
        else if(a[i]>b[i]){
            cout<<"1";
            return 0;
        }
    }
    cout<<"0";
    return 0;
}
