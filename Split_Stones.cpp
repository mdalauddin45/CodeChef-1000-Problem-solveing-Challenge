#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,x,y;
       cin>>a>>b>>c>>x>>y;
       if((a+b+c)!=(x+y))
       cout<<"NO"<<endl;
       else if(y<(min(a,(min(b,c))))||x<min(a,min(b,c)))
       cout<<"NO"<<endl;
       else 
       cout<<"YES"<<endl;
    }
    
    return 0;
}