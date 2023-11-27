#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int j = 0; j < n; j++) {
        cin >> a[j];
    }

    sort(a.begin(), a.end());

    int maxlen = 1;
    for (int j = 0; j < n - 1; j++) {
        for (int k = n - 1; k > j; k--) {
            int sum = a[j] + a[k];
            int len = 1;
            int o = k - 1;
            for (int l = j + 1; l < o; l++) {
                for (int m = o; m > l; m--) {
                    if (a[l] + a[m] == sum) {
                        len++;
                        o = m - 1;
                        break;
                    }
                }
            }
            if (len > maxlen) {
                maxlen = len;
            }
        }
    }

    cout << 2 * maxlen << endl;
    return 0;
}
