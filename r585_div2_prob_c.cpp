
#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i;
    cin>>n;
    string s,t;
    cin>>t;
    cin>>s;
    bool swp;

    int ab[n];
    int _ab = 0;
    int ba[n];
    int _ba = 0;

    for(i=0;i<n;i++){
        if((s[i] == 'a') && (t[i] == 'b'))
            ab[_ab++] = i+1;
        else if((s[i] == 'b') && (t[i] == 'a'))
            ba[_ba++] = i+1;
    }
    if((_ab + _ba)%2 != 0){
        cout<<"-1";
        return 0;
    }
    if((_ab%2 == 0)&&(_ba%2 == 0)){cout<<(_ab+_ba)/2<<endl;}
    else {cout<<((_ab+_ba)/2)+1<<endl;}
    i = 0;
    if(_ab%2 == 0) {
        swp = false;
        while(i<_ab){
            cout<<ab[i]<<" "<<ab[i+1]<<endl;
            i+=2;
        }
    }
    else {
        swp = true;
        while(i<_ab-1){
            cout<<ab[i]<<" "<<ab[i+1]<<endl;
            i+=2;
        }
    }
    i = 0;
    if(_ba%2 == 0) {
        while(i<_ba){
            cout<<ba[i]<<" "<<ba[i+1]<<endl;
            i+=2;
        }
    }
    else {
        while(i<_ba-1){
            cout<<ba[i]<<" "<<ba[i+1]<<endl;
            i+=2;
        }
    }
    if(swp){
        cout<<ba[_ba-1]<<" "<<ba[_ba-1]<<endl;
        cout<<ab[_ab-1]<<" "<<ba[_ba-1]<<endl;
    }
    return 0;
}
