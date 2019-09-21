#include <bits/stdc++.h>

using namespace std;
#define long long int ll;

char swap_(char c){
    switch(c){
        case 'a':
            return 'b';
        case 'b':
            return 'a';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int n;
    int i,j;
    int cnt = 0;
    cin>>n;
    cin>>s;
    for(i=2;i<=n;i+=2){
        if((s[i-1] == 'a')&&(s[i-2] == 'a')||(s[i-1] == 'b')&&(s[i-2] == 'b')){
            cnt++;
            s[i-1] = swap_(s[i-1]);
        }
    }
    cout<<cnt<<endl<<s;
    return 0;
}
