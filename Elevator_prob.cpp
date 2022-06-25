//Problem name is ELEVSTRS

#include"bits/stdc++.h"
using namespace std;
int main(){

    //Taking testcases input
int t;cin>>t;
while(t--){

    //Initializing 3 variables
    int n,v1,v2;cin>>n>>v1>>v2;
    int t1,t2;

    //main logic of code
    t2 = (2*n)/v2;
    t1 = (n*sqrt(2))/v1;
    if(t1<=t2){

    //printing values
    cout<<t1<<endl;
    }
    else{
    cout<<t2<<endl;
    }
} 
return 0;
}