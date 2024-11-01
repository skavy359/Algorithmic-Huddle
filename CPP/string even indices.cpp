#include <iostream>
#include <string>
using namespace std;

void evenindices(string s){
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            cout<<s[i];
        }
    }
}

int main(){
    string s;
    cin>>s;
    evenindices(s);

    return 0;
}
