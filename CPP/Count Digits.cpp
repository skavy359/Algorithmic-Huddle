#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int countdigits(int s){
    int count=0;
    while(s>0){
        count++;
        s=s/10;
    }
    return count;
}
int main(){
    int s;
    cin>>s;
    cout<<countdigits(s);
    return 0;
}
