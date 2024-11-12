#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void tablediff(int a,int b){
    for(int i=1;i<11;i++){
        cout<<(a*i)-(b*i)<<" ";
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    tablediff(a,b);
    return 0;
}
