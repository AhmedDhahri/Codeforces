#include <bits/stdc++.h>

using namespace std;
#define long long int ll;



void swap(int *xp, int *yp)  {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int** arr, int n){
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j][0] < arr[j+1][0]){
                swap(&arr[j][0], &arr[j+1][0]);
                swap(&arr[j][1], &arr[j+1][1]);
            }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int n;
    int i,j;
    j=0;
    cin>>n;
    int** dur = new int*[n];
    for(i=0;i<n;i++){
        dur[i] = new int[2];
        cin>>dur[i][0];
        dur[i][1] = i;
    }
    bubbleSort(dur,n);

    for(i=0;i<n;i++){
        j += i*dur[i][0] + 1;
    }
    cout<<j<<endl;
    for(i=0;i<n;i++){
        cout<<dur[i][1] + 1<<" ";
    }
    return 0;
}
