#include <bits/stdc++.h>
 
 
using namespace std;
long long int n,m,t;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
	while(t--){
		cin>>n;
		long long int* p = new long long int[n];
		for(int i=0;i<n;i++)
			cin>>p[i];
		cin>>m;
		long long int* q = new long long int[m];
		for(int i=0;i<m;i++)
			cin>>q[i];
	long long int sq1=0;long long int sp1=0;
	
	for(int i=0;i<n;i++)
		if(p[i]%2==0)sp1++;
		
	for(int i=0;i<m;i++)
		if(q[i]%2==0)sq1++;
		
	long long int result = sp1*sq1+(n-sp1)*(m-sq1);
	cout<<result<<endl;
	}
 
    return 0;
}