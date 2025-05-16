#include <iostream>
using namespace std;

int main(){
	string a;
    cin>>a;

    a[0]=char(toupper(a[0]));
    cout<<a;

    return 0;
}
