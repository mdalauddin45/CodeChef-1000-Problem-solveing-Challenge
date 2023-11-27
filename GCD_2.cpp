#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

cpp_int gcd(cpp_int a, cpp_int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num_cases;
    cin >> num_cases;

    for (int i = 0; i < num_cases; ++i) {
        cpp_int a, b;
        cin >> a >> b;

        cpp_int result = gcd(a, b);
        cout << result << endl;
    }

    return 0;
}
