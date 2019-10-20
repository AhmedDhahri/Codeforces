#include <bits/stdc++.h>
#include <string.h>

using namespace std;
#define ll long long int

typedef struct{
    int* a;
    int n;
}tab;

tab sorted(tab t){
    tab ts = {new int[t.n], t.n};
    memcpy((ts.a),(t.a),(t.n)*sizeof(int));
    sort((ts.a),(ts.a)+(t.n));
    return ts;
}
tab compress(tab ts){
    tab r = {new int[ts.n], 1};
    r.a[0] = ts.a[0];
    for(int i=0;i<ts.n;i++){
        if(ts.a[i] != r.a[r.n-1]){
            r.a[r.n++] = ts.a[i];
        }
    }
 return r;
}
tab stat(tab r, tab t){
    tab s = {new int[r.n-1],r.n-1};
    for(int i=0;i<s.n;i++){
        bool loaded = false;
        s.a[i]=1;
        for(int j=0;j<t.n;j++){
            if(loaded && (t.a[j] == r.a[i])){s.a[i]=0;break;}
            if(t.a[j] == r.a[i+1]) loaded = true;
        }
    }
    return s;
}

int maxone(tab s){
    int mmax=0;
    int m =0;
    for(int i=0;i<s.n;i++){
        if(s.a[i]==1)m++;
        else if(s.a[i]==0) m=0;
        if(m>mmax)mmax = m;
    }
    return mmax;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    tab t;
    memset(&t,0,sizeof(tab));
    cin>>q;
    while(q--){
        cin>>t.n;
        t.a = new int[t.n];
        for(int i=0;i<t.n;i++)
            cin>>t.a[i];
        tab ts = sorted(t);
        tab r = compress(ts);
        tab s = stat(r,t);
        cout<<s.n - maxone(s)<<endl;

    }
    return 0;
}
