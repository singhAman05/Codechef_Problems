#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int i=1;
        while(n!=0){
            cout<<i<<" ";
            i+=2;
            n--;
        }
        cout<<endl;
    }
    return 0;
}