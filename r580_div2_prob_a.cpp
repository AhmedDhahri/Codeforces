#include<iostream>

using namespace std;

bool exist(int k);

int* a;
int* b;
int n,m;

int main(){
    do{
        cin>>n;
    }while( (n<1) || (n>100));

    a = new int[n];
    for(int i=0;i<n;i++){
        do{
            cin>>a[i];
        }while( (a[i]<1) || (a[i]>200));
    }

    do{
        cin>>m;
    }while( (m<1) || (m>100));

    b = new int[m];
    for(int i=0;i<m;i++){
        do{
            cin>>b[i];
        }while( (b[i]<1) || (b[i]>200));
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!exist(a[i]+b[j])){
                cout<<a[i]<<endl<<b[j]<<endl;
                return 0;
            }
        }
    }

    return 0;
}





bool exist(int k){
    bool res = false;
    for(int i=0;i<n;i++)
        if(a[i] == k){
            res = true;
            break;
        }
    if(!res){
        for(int i=0;i<m;i++)
            if(b[i] == k){
                res = true;
                break;
        }
    }
    return res;
}
