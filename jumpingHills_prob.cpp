//Problem name Jumping in the hills
//Problem code HILLS

#include"bits/stdc++.h"
using namespace std;
int main(){

    //Taking testcases input 
   int t;cin>>t;
   while(t--){

    //Initializing required variables
      int n,u,d;
      cin>>n>>u>>d;
      int a[n];
      for(int i=0;i<n;i++){
         cin>>a[i];
      }

      int l=1;
      int k=1;
    
    //Main code logic
      for(int i=0;i<n;i++){
         if(a[i]<=a[i+1]){
            if((a[i+1]-a[i]) <= u){
               l+=1;
            }
            else{
               break;
            }
         }
         else if(a[i]>a[i+1]){
            if((a[i]-a[i+1]) < d){
               l+=1;
            }
            else{
               if(k==0){
                  break;
               }
               else{
                  l+=1;
                  k=0;
               }
            }
         }
      }
      cout<<l<<endl;
   }
   
}