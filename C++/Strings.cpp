#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string c,d;
    cin>>c>>d;
    cout<<c.length()<<" "<<d.length()<<endl;
    cout<<c+d<<endl;
    
    char temp=c[0];
    c[0]=d[0];
    d[0]=temp;
    
    cout<<c<<" "<<d<<endl;
    
    return 0;
}
