#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int digit(int t, int pos){
    int tenpow = 1;
    for(int i=0;i<pos;i++)
        tenpow*=10;
    int k = t/tenpow;
    return k%(tenpow*10);
}

int len(int t){
    int k;
    if(t >= 1e8)
        return 9;
    else if(t >= 1e7)
        return 8;
    else if(t >= 1e6)
        return 7;
    else if(t >= 1e5)
        return 6;
    else if(t >= 1e4)
        return 5;
    else if(t >= 1e3)
        return 4;
    else if(t >= 1e2)
        return 3;
    else if(t >= 1e1)
        return 2;
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int i,q,res;
    ll k,n,j;
    cin>>q;
    while(q--){
        cin>>k;
        j=0;
        n=0;
        while(true){
            j++;
            for(res=0;res<j;res++){
                n+=len(res+1);
                if(n>=k) goto print;
            }
        }
    print:
    cout<<digit(res+1,n-k)<<endl;
    }
    return 0;
}
