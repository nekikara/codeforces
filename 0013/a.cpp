#include <iostream>
using namespace std;

int GCD(int m, int n) {
    if (m < n) return GCD(n, m);
    int r = m % n;
    if (r == 0) return n;
    return GCD(n, r);
}

int main() {
    int a, n;
    cin >> a;
    n = a - 2;

    int div = -1;
    int sum = 0;
    for (int i=2;i<=(a-1); i++) {
        div = a;
        while (div != 0) {
            int x = div;
            div = x / i;
            sum +=  x % i;
        }
    }

    int gcd = GCD(sum, n);
    cout << sum / gcd << "/" << n / gcd << endl;
    return 0;
}
