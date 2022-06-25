//Problem status MYSERVE

#include"bits/stdc++.h"
using namespace std;
int main(){

    //Taking testcases input
   int t;cin>>t;
   while(t--){

    //initilizing req. variables
    int p,q;cin>>p>>q;
    int sum = p+q;

    //main code logic
    if(sum%2==0){
        if(sum%4==0){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
    else{
        sum = sum-1;
        if(sum%4==0){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
}
   return 0;
}