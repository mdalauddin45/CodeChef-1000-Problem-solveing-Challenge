#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int x[26] = {0};
        int y[26] = {0}; 
        for (char c : a) {
            x[c - 'a']++;
        }
        for (char c : b) {
            y[c - 'a']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (x[i] > 0 && y[i] > 0) {
                ans = max(ans, min(x[i], y[i]));
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}