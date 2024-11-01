#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
   int d,n;
   cin>>d>>n;
   int res;
   if(n<=d){
       cout<<d-n;
   }
   else{
       res= abs(d-n);
       res= res%7;
       cout<< 7-res;
   }
   return 0;
}
