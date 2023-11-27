#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){
        int x,y;
        cin>>x>>y;
        int invest = max(0, x - y);
        cout << invest << endl;
    }
    return 0;
}