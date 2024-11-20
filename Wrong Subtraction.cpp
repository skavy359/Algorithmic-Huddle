#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    while(b--){
        if(a%10!=0){
            a--;
        }
        else if(a%10==0){
            a=a/10;
        }
    }
    cout<<a;
    return 0;
}
