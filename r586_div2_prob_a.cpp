#include <bits/stdc++.h>

using namespace std;
void parse(const string s, int* stat);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i=0;
    string s;
    cin>>n;
    cin>>s;
    int stat[5];
    parse(s,stat);// e n o r z
    while(stat[1]--){
        cout<<"1 ";
    }
    while(stat[4]--)
        cout<<"0 ";
    return 0;
}
// e n o r z
void parse(const string s, int* stat){
    memset(stat,0,5*sizeof(int));
    for(char c: s){
        switch(c){
        case 'e':
            stat[0]++;
            break;
        case 'n':
            stat[1]++;
            break;
        case 'o':
            stat[2]++;
            break;
        case 'r':
            stat[3]++;
            break;
        case 'z':
            stat[4]++;
            break;
            }
    }
}
