#include <iostream>
using namespace std;

int main(){
	string a;
    string b;
    cin>>a;
    cin>>b;

    if(a.length()!=b.length()){
        cout<<"NO";
    }
    else{
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[b.length()-1-i]){
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
    return 0;
}
