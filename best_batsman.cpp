#include"bits/stdc++.h"
using namespace std;
int prem(int l, int u){
    int a=1,s=1;
    for(int i=l+u;i>u;i--){
        a*=i;
    }
    for(int i=l;i>0;i--){
        s*=i;
    }
    // cout<<a<<s;
    return (a/s);
}
int main(){
    int t;cin>>t;
    while(t--){
        vector<int> v;
        for(int i=0;i<11;i++){
            int x;cin>>x;
            v.push_back(x);
        }
        int r;cin>>r;

        int l=0;
        sort(v.begin(),v.end());
        auto it=v.end()-1;
        while(it>=v.end()-r){
            // l++;it--;
            if(*it==*(it-1)){
                l++;
            }
            else{
                l=0;
            }
            it--;
        }
        int u=0,ans;
        it=v.end()-r;
        while(*it==*(it-1)){
            u++;
            it--;
        }
        ans=prem(l,u);
    cout<<ans<<endl;
    }
}