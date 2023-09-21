#include<bits/stdc++.h>
using namespace std;
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int ans =n*x;
        if(countDigits(ans)==5) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}