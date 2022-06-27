//Problem name is Making Meal
//Problem code is CFMM

#include"bits/stdc++.h"
using namespace std;
int main(){

   //Taking input testcases
   int t;cin>>t;
   while(t--){
      
      //Taking input of number of strings
      int n;cin>>n;
      int c1=0,d1=0,e1=0,f1=0,h1=0,o1=0;
      int a=0;

      //main code logic
      for(int i=0;i<n;i++){
         string s;cin>>s;
         for(int i=0;i<s.size();i++){
            if(s[i]=='c'){
               c1+=1;
            }
            else if(s[i]=='d'){
               d1+=1;
            }
            else if(s[i]=='e'){
               e1+=1;
            }
            else if(s[i]=='f'){
               f1+=1;
            }
            else if(s[i]=='h'){
               h1+=1;
            }
            else if(s[i]=='o'){
               o1+=1;
            }
            
         }
         a = min(c1/2,min(d1,min(e1/2,min(f1,min(h1,o1)))));
      }
      cout<<a<<endl;
   }
   return 0;
}