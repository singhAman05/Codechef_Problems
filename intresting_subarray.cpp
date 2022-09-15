// #include"bits/stdc++.h"
// using namespace std;
// long long main(){
//     long long t;cin>>t;
//     while(t--){
//         long long n;cin>>n;
//         vector<long long> v;
//         for(long long i=0;i<n;i++){
//             long long x;cin>>x;
//             v.push_back(x);
//         }
//         sort(v.begin(), v.end());

//         long long mx=-1e18;
//         long long mn=1e18;

//         mx=max(v[0]*v[0], v[n-1]*v[n-1]);
//         if(v[0]<0 && v[n-1]>0){
//             mn=v[0]*v[n-1];
//         }
//         else{
//             for(long long i=0;i<n;i++){
//                 mn=min(mn, v[i]*v[i]);
//             }
//         }
//         cout<<mn<<" "<<mx<<endl;
//     }
//     return 0;
// }


//CHEFLAND GAMES
// #include"bits/stdc++.h"
// using namespace std;
// long long main(){
//     long long t;cin>>t;
//     while(t--){
//         set<long long> s;
//         for(long long i=0;i<4;i++){
//             long long x;cin>>x;
//             s.insert(x);
//         }
//         long long l=0;
//         for(auto it=s.begin();it!=s.end();++it){
//             if(*it==1){
//                 l++;
//             }
//         }
//         if(l==0){
//             cout<<"IN"<<endl;
//         }
//         else cout<<"OUT"<<endl;
//     }
//     return 0;
// }


//NEAREST EXIT
// #include"bits/stdc++.h"
// using namespace std;
// long long main(){
//     long long t;cin>>t;
//     while(t--){
//         long long x;cin>>x;
//         if(x<=50 && x>=1) cout<<"LEFT\n";
//         else cout<<"RIGHT\n";
//     }
//     return 0;
// }

//MAXIMIZE COLOURS
// #include"bits/stdc++.h"
// using namespace std;
// long long main(){
//     long long t;cin>>t;
//     while(t--){
//         long long a[3];
//         for(long long i=0;i<3;++i){
//             cin>>a[i];
//         }
//         sort(a,a+3);
//         long long b=a[0],c=a[1],d=a[2];
//         long long l=0;
//         for(long long i=0;i<3;i++){
//             if(a[i]>=1){
//                 l+=1;
//             }
//         }

//         if(b==2){
//             if(d>=3){
//                 cout<<l+2<<endl;
//             }
//             else{
//                 cout<<l+1<<endl;
//             }
//         }
//         else if(b>=3){
//             cout<<l+3<<endl;
//         }
//         else{
//             if(c<=1){
//                 cout<<l<<endl;
//             }
//             else{
//                 cout<<l+1<<endl;
//             }
//         }
//     }
//     return 0;
// }

//K SUBARRAYS
// #include"bits/stdc++.h"
// using namespace std;
// long long main(){
//     long long t;cin>>t;
//     while(t--){
//         long long n,k;cin>>n>>k;
//         long long a[n];
//         long long l=0;
//         for(long long i=0;i<n;i++){
//             cin>>a[i];
//             l=__gcd(l,a[i]);
//         }
//         long long j=0,c=0,t=0;
//         while(j<n && t<k){
//             c=0;
//             while(j<n && c!=l){
//                 c=__gcd(c,a[j]);
//                 j+=1;
//             }
//             if(c==l) t+=1;
//         }

//         if(t==k){
//             cout<<"YES\n";
//         }
//         else{
//             cout<<"NO\n";
//         }
//     }
//     return 0;
// }

//FARAWAY
// #include"bits/stdc++.h"
// using namespace std;
// int main(){
//     long long t;cin>>t;
//     while(t--){
//         long long n,m;cin>>n>>m;
//         long long a[n];
//         for(long long i=0;i<n;++i){
//             cin>>a[i];
//         }
//         long long sum=0,mini=1,maxi=m;
//         for(long long i=0;i<n;++i){
//             sum += max(abs(a[i] - 1),abs(a[i] - maxi));
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }

#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;string s;
        cin>>n>>s;
        int a=0,b=0;
        for(char c:s){
            a+=(c=='0');
            b+=(c=='1');
        }
    }
}
