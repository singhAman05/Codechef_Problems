#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        set<string> s1;
        string str="";
        for(int i=1;i<s.size();++i){
            str=s[i];
            str=str+s[i-1];
            s1.insert(str);
        }
        cout<<s1.size()<<endl;
    }
    return 0;
}