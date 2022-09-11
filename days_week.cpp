#include"bits/stdc++.h"
using namespace std;
void printp(pair<int,string> p[7], int n, string s){
    for(int i=0;i<7;i++){
        if(n==28) cout<<p[i].first<<" ";
        
        else if(n==29){
            if(p[i].second==s) cout<<p[i].first+1<<" ";
            else cout<<p[i].first<<" ";
        }

        else if(n==30){
            if(s=="sun"){
                cout<<"5 4 4 4 4 4 5";
                break;
            }
            else if(p[i].second==s || p[i-1].second==s) cout<<p[i].first+1<<" ";
            else cout<<p[i].first<<" ";
        }

        else if(n==31){
            if(s=="sun"){
                cout<<"5 5 4 4 4 4 5";
                break;
            }
            else if(s=="sat"){
                cout<<"5 4 4 4 4 5 5";
                break;
            }
            else if(p[i].second==s) cout<<p[i].first+1<<" ";
            else if(p[i-1].second==s) cout<<p[i].first+1<<" ";
            else if(p[i-2].second==s) cout<<p[i].first+1<<" ";
            else cout<<p[i].first<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        pair<int,string> p[7];
        p[0]={4,"mon"};
        p[1]={4,"tues"};
        p[2]={4,"wed"};
        p[3]={4,"thurs"};
        p[4]={4,"fri"};
        p[5]={4,"sat"};
        p[6]={4,"sun"};
        printp(p,n,s);
    }
    return 0;
}