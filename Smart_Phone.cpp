#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long ans =0;
    for(int i=0;i<n;i++){
        long long revenue = 1LL * v[i] * (n - i);
        if (revenue > ans) {
            ans = revenue;
        }
    }
    cout<<ans<<endl;
    return 0;
}