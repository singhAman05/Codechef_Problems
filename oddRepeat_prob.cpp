#include"bits/stdc++.h"
using namespace std;
int main(){

    //Taking testcases input
   int t;cin>>t;
   while(t--){

    //Initializing required variables
      int n,k,s;cin>>n>>k>>s;

      //Main code logic
      int i=1;
      int sum = (n*(2+((n-1)*2)))/2;
      while(n--){
         int a=sum-i+(i*k);
         if(a==s){
            cout<<i<<endl;
            break;
         }
         else{
            i=i+2;
         }
      }
   }
   return 0;
}