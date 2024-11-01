#include <iostream>
using namespace std;
void utility(){
    static int count=1;
    cout<<count;
    count++;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        utility();
    }
    return 0;
}
