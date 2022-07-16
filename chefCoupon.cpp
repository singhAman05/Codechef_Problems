//Problem Name:- Chef and his Coupon

#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int d,c;cin>>d>>c;
        int a1,a2,a3;cin>>a1>>a2>>a3;
        int b1,b2,b3;cin>>b1>>b2>>b3;
        int a=a1+a2+a3;
        int b=b1+b2+b3;
        if(a>=150 && b>=150){
            int sum1=a+b+2*d;
            int sum2=a+b+c;
            if(sum2<sum1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(a>=150 && b<150){
            int sum1=a+b+2*d;
            int sum2=a+b+c+d;
            if(sum2<sum1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(a<150 && b>=150){
            int sum1=a+b+2*d;
            int sum2=a+b+c+d;
            if(sum2<sum1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}