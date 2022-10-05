//Plusle and Minun on Array

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(long long int i=0;i<n; i++)
	    {
	        cin>>a[i];
	        a[i]=abs(a[i]);
	    }
	    long long int as=0;
	    long long int em=INT_MAX,om=INT_MIN;
	    for(long long int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            as+=a[i];
	            em=min(em,a[i]);
	        }
	        else
	        {
	            as-=a[i];
	            om=max(om,a[i]);
	        }
	    }
	    long long int asn=as+2*(om-em);
	    cout<<max(as,asn)<<endl;
	}
	return 0;
}
