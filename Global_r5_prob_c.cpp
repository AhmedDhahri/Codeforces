#include <bits/stdc++.h>


using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    ll** x = new ll[n];ll** y = new ll[n];ll** z = new ll[n];
    for(int i=0;i<n;i++){
        x[i] = new ll[2];y[i] = new ll[2];z[i] = new ll[2];
        x[i][0] = i;y[i][0] = i;z[i][0] = i;
        cin>>x[i][1];cin>>y[i][1];cin>>z[i][1];
    }

    return 0;
}
