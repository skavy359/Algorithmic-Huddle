#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i,j,k=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>=k)
            cout<<"* ";
            else
                cout<<" ";
        }
        k--;
        cout<<endl;
    }
}
