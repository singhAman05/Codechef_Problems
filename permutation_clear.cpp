#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n;
        vector<int> a,b;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a.push_back(x);
        }
        cin>>m;
        int l=0;
        for(int i=0;i<m;i++){
            int x;cin>>x;
            b.push_back(x);
        }
        for(auto i=b.begin();i!=b.end();++i){
            auto it = find(a.begin(),a.end(),*i);
            if(it==a.end()-1){
                l++;
                continue;
            }
            else{
                a.erase(it);
            }
        }
        while(l!=0){
            a.pop_back();
            l--;
        }
        for(auto j=a.begin();j!=a.end();++j){
            cout<<*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}