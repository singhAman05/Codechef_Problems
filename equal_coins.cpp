#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        pair<int,int> p;
        cin>>p.first>>p.second;
        int s=(p.first)+(p.second*2);
        if(s%2!=0){
            cout<<"NO"<<endl;
        }
        if(s%2==0){
            if(p.second==0)  cout<<"YES";
            else if(p.first==0 && p.second%2!=0){
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}