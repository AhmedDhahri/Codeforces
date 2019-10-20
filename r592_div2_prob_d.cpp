#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    ll k;
    cin>>n;cin>>k;
    ll* a = new ll[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    ll* emin = min_element(a,a+n);
    ll* emax = max_element(a,a+n);
    ll diff = *emax- *emin;
    ll dec[min(diff,k)];
    ll inc[min(diff,k)];
    ll r1,r2;

    for(ll i=0;i<diff;i++){
        dec[i]=0;inc[i]=0;
        r1 = *emax-i;
        r2 = *emin+i;
        for(ll j=0;j<n;j++){
            if(a[j]>r1)dec[i]+=(a[j]-r1);
            if(a[j]<r2)inc[i]+=(r2-a[j]);
        }
    }
    delete[] a;
    ll diffm;
    r1=0;r2=0;
    while(dec[r1+1] <= k)r1++;
    while(dec[r1] + inc[r2+1] <= k)r2++;
    diffm=diff-r1-r2;
    while(r1 != 0){
        r1--;
        while(dec[r1] + inc[r2+1] <= k)r2++;
        if(diff-r1-r2 < diffm)diffm=diff-r1-r2;
    }
    cout<<diffm;
    return 0;
}
