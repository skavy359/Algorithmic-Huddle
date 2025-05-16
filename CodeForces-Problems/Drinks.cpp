#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int a;
    int temp=n;
    while(temp--){
        cin>>a;
        sum+=a;
    }

    float ans= static_cast<float>(sum);
    ans= ans/ static_cast<float>(n);
    cout<<fixed<<setprecision(12)<<ans;

    return 0;
}
