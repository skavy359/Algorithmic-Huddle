#include <iostream>
using namespace std;

int main() {
    int x = 2;
    double y = 3.5;
    char z = 'g';

    // store the size of the variables into a, b, c variables;
    int a,b,c;
    
    a=sizeof(x);
    b=sizeof(y);
    c=sizeof(z);

    // printing the size of the variable x.
    cout << a << " " << b << " " << c << endl;
    return 0;
}
