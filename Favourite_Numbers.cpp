#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int A;
        cin >> A;

        bool aliceLikes = (A % 2 == 0) && (A % 7 == 0);
        bool bobLikes = (A % 2 == 1) && (A % 9 == 0);

        if (aliceLikes && !bobLikes) {
            cout << "Alice" << endl;
        } else if (bobLikes && !aliceLikes) {
            cout << "Bob" << endl;
        } else {
            cout << "Charlie" << endl;
        }

    }
    
    return 0;
}