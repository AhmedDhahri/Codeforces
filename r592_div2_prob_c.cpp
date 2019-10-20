#include <bits/stdc++.h>


using namespace std;
typedef long long ll;

ll pgcd_f(ll a, ll b){
  ll r;
  while (b != 0){
      r = a%b;
      a = b;
      b = r;
    }
  return a;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,p,w,d;
    ll x;ll y;ll z;ll l;
    cin>>n;cin>>p;cin>>w;cin>>d;
    ll pgcd = pgcd_f(w,d);
    if((p%pgcd == 0) && (n*w >= p)){
        x = div(p,w).quot;
        y = 0;
        while(true){
            l = x*w+y*d;
            if(l == p)break;
            if(l < p){l+= d;y++;}
            else if(l>p){l-=w;x--;}
            if(x < 0){cout<<-1;return 0;}
        }
        z = n-x-y;
        if(z<0){cout<<-1;return 0;}
        else cout<<x<<" "<<y<<" "<<z;
    }
    else
        cout<<-1;
    return 0;
}
