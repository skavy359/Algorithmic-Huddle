#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr1[n],arr2[n];
        int maxi=-1;
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            maxi=max(maxi,arr1[i]);
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
            maxi=max(maxi,arr2[i]);
        }
        
    }
    return 0;
}