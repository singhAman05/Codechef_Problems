#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,l=0;cin>>n;
        int a[n];
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        for(auto it=s.begin();it!=s.end();++it){
            l++;
        }
        
        if(l%2==0 || l!=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}