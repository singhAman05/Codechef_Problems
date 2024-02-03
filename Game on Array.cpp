/*
  This is the code used for constructive algorithm
*/

#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int,int> mpi;
typedef set<int> seti;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int ar[n];
        ll stones = 0;
        for(int i=0;i<n;i++) {cin>>ar[i];stones+=ar[i];}
        
        if(n==1 && ar[0]>=2) cout<<"Alice\n";
        else if(stones&1) cout<<"Bob\n";
        else{
            ll index_stones = 0;
            for(int i=0;i<n;i++){
                if(i%2){
                    index_stones+=ar[i];
                }
            }
            
            if(index_stones%2 != (stones/2)%2){
                cout<<"Alice\n";
            }
            else cout<<"Bob\n";
        }
    }
    return 0;
}
