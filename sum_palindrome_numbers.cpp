#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int sum=0;
        int l,r;cin>>l>>r;
        for(int i=l;i<=r;++i){
            string s=to_string(i);
            string s1=s;
            reverse(s.begin(),s.end());
            // cout<<s<<s1;
            if(s==s1){
                sum+=stoi(s);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}