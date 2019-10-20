#include <bits/stdc++.h>
 
#define ll long long int
 
using namespace std;
ll* a;ll n;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
	a = new ll[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
	sort(a,a+n);
	while(*a == 0){n--;a++;}
	ll r1 = n/2;ll s1=0;ll s2=0;
	for(ll i=0;i<n;i++){
		if(i<r1)s1+=a[i];
		else s2+=a[i];
	}
	cout<<s1*s1+s2*s2;
    return 0;
}