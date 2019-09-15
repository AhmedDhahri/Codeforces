#include <iostream>
#include <string>
#include <iomanip>


using namespace std;
void seq_map(char* s1, char* s2, int n, int* r, int* rn);
int swap_count(int* r, int n);

int main(){
    int n;
    do{
        cin>>n;
    }while((n<1)||(n>20000));
    char t[n];char s[n];
    cin>>t;
    cin>>s;
    string out[n];int swp = 0; int rn;
    int smap[n];
    seq_map(t,s,n,smap,&rn);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if((smap[i] != 0)&&(smap[j] != 0))
                if((smap[i] == smap[j])&&(i != j)){
                        out[swp] = to_string(i+1)+" "+to_string(j+1);
                        swp++;
                        smap[i] = 0;smap[j] = 0;
                        rn-=2;
                        break;
                    }
        if(rn%2 != 0){
            cout<<"-1";
            return 0;
        }
        else if((rn == 2))
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    if((smap[i] != 0)&&(smap[j] != 0)&&(smap[i] != smap[j])){
                        out[swp] = to_string(i+1)+" "+to_string(i+1);
                        swp++;
                        out[swp] = to_string(i+1)+" "+to_string(j+1);
                        swp++;
                        smap[i] = 0;smap[j] = 0;

                        break;
                    }

    cout<<swp<<endl;
    for(int i=0;i<swp;i++)
        cout<<out[i]<<endl;
    return 0;
}


int swap_count(int* r, int n){
    int c = 0;
    for(int i=0;i<n;i++)
        if(r[i] == 0)
            c++;
    return (n-c);
}

void seq_map(char* s1, char* s2, int n, int* r, int* rn){
    *rn =0;
    for(int i=0;i<n;i++){
        if(s1[i] == s2[i]){
            r[i] = 0;
            continue;
        }

        if((s1[i] == 'a')&& (s2[i] == 'b')){
            r[i] = 1;
            *rn+=1;
            continue;
        }
        if((s1[i] == 'b')&& (s2[i] == 'a')){
            r[i] = 2;
            *rn+=1;
            continue;
        }
    }
}
