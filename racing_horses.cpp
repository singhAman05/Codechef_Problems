#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int minn=*(v.end()-1)-*(v.end()-2);
        for(auto it=v.end()-1;it>v.begin();--it){
            int diff=*it - *(it-1);
            minn=min(minn,diff);
        }
        cout<<minn<<endl;
    }
    
    return 0;
}