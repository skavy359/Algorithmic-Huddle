#include <iostream>
using namespace std;

int main(){
	string a;
    cin>>a;

    int uppercount=0;
    int lowercount=0;

    for(int i=0;i<a.length();i++){
        if(a[i]>='A' && a[i]<='Z'){
            uppercount++;
        }
        else if(a[i]>='a' && a[i]<='z'){
            lowercount++;
        }
    }

    if(uppercount>lowercount){
        for(char i:a){
            cout<<char(toupper(i));
        }
    }
    else{
        for(char j:a){
            cout<<char(tolower(j));
        }
    }

    return 0;
}
