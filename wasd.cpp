#include <bits/stdc++.h>

using namespace std;
using pii=pair<int, int>;
using piii=pair<pair<int, int>, int>;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int max_up=0,max_down=0,max_right=0,max_left=0;
        int mov_up=0,mov_down=0,mov_right=0,mov_left=0;
        int x=0,y=0;
        for(auto i:s)
        {
            if(i=='W') y++;
            else if(i=='S') y--;
            else if(i=='D') x++;
            else if(i=='A') x--;
            max_up=max(max_up,y);
            max_down=min(max_down,y);
            max_right=max(max_right,x);
            max_left=min(max_left,x);

            mov_up=max(mov_up,y-max_down);
            mov_down=max(mov_down,max_up-y);
            mov_right=max(mov_right,x-max_left);
            mov_left=max(mov_left,max_right-x);
        }
        int a,b,c,d;
        a=max(mov_up,mov_down);
        b=max(int(mov_up||mov_down), a - (mov_up != mov_down));
        c=max(mov_left,mov_right);
        d=max(int(mov_left||mov_right), c - (mov_left != mov_right));
        cout<<min(1ll*(a+1)*(d+1),1ll*(b+1)*(c+1))<<endl;
    }
    return 0;
}
