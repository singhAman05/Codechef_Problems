//Problem code:- EVMHACK

#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        float a,b,c,p,q,r;cin>>a>>b>>c>>p>>q>>r;
        float s1=a+b+c;
        float s2=(p+q+r)/2.0;
        // cout<<s2<<endl;
        if(s1>s2){
            cout<<"YES"<<endl;
        }
        else{
            int m=p-a,n=q-b,o=r-c;
            int x=max(m,max(n,o));
            if((s1+x)>s2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}