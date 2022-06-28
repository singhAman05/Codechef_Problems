//Problem name is:- Chef and digits of number
//Problem code is:- LONGSEQ

#include"bits/stdc++.h"
using namespace std;
int main(){

   //Taking testcases input
   int t;cin>>t;
   while(t--){

   //Taking input required variables
   string s;cin>>s;
   int l=0,k=0;
   for(int i=0;i<s.size();i++){
      if(s[i]=='1'){
         l+=1;
      }
      else if(s[i]=='0'){
         k+=1;
      }
   }

   //Main code logic
   if((l==1 && k==0) || (l==0 && k==1)){
      cout<<"Yes"<<endl;
   }
   else if(l==1 && k==1){
      cout<<"Yes"<<endl;
   }
   else if((l>1 && k==0) || (l==0 && k>1)){
      cout<<"No"<<endl;
   }
   else if((l>1 && k==1) || (l==1 && k>1)){
      cout<<"Yes"<<endl;
   }
   else{
      cout<<"No"<<endl;
   }
   }
   return 0;
}