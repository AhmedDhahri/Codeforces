#include <bits/stdc++.h>


using namespace std;
typedef int ll;
int* a;int n;


int compute(int p){
    double md2;ll res;
    int i = p;int i_mx=p;
    ll mx;
    mx = a[i];
    int c = 1;
    while(c<2*n){
        md2 = (mx/2.0);
        i = ((i+1)%n);
        if(i==i_mx)return -1;
        res =a[i];
        if(md2>res){return c;}
        else c++;
        if(mx<a[i]){mx = a[i];i_mx = i;}
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    a = new ll[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cout<<compute(i)<<" ";
    return 0;
}
