#include <iostream>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    cout << n;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
            cout << " " << n;
        } else {
            n = 3 * n + 1;
            cout << " " << n;
        }
    }
    return 0;
}