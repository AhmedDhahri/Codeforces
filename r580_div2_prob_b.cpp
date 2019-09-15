#include<iostream>

using namespace std;

int* a;
int n;

int main(){
    do{
        cin>>n;
    }while( (n<1) || (n>100000));

    a = new int[n];

    for(int i=0;i<n;i++){
        do{
            cin>>a[i];
        }while( (a[i]<-1000000000) || (a[i]>1000000000));
    }
    int c = 0;
    int neg = 0;
    int z = 0;
    for(int i=0;i<n;i++){
        if(a[i]<-1){
            neg++;
            c = c - (a[i]+1);
        }
        else if(a[i]>=1)
            c = c + (a[i] - 1);
        else if(a[i] == -1)
            neg++;
        else if(a[i] == 0)
            z++;
    }
    if(z != 0)
        c = c + z;
    else
        if(neg%2 != 0)
            c = c + 2;
    cout<<c;
    return 0;
}
