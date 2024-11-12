#include <iostream>
using namespace std;

void multiplicationtable(int n){
    for(int i=1;i<11;i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    multiplicationtable(n);
    return 0;
}
