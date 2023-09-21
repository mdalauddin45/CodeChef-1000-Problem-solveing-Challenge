#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int ans =min(x,y)+2*(y-min(x,y));
        cout<<ans<<endl;
    }
    
    return 0;
}