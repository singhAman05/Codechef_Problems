#include"bits/stdc++.h"
using namespace std;
long long main(){
    long long t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> v;
        for(long long i=0;i<n;i++){
            long long x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        long long mx=-1e18;
        long long mn=1e18;

        mx=max(v[0]*v[0], v[n-1]*v[n-1]);
        if(v[0]<0 && v[n-1]>0){
            mn=v[0]*v[n-1];
        }
        else{
            for(long long i=0;i<n;i++){
                mn=min(mn, v[i]*v[i]);
            }
        }
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}
