#include <iostream>
using namespace std;

int main() {
    int n, p1, p2, p3, t1, t2;
    cin >> n >>  p1 >>  p2 >>  p3 >>  t1 >>  t2;

    int l[n], r[n];
    for (int i=0; i<n; i++) {
        cin >> l[i] >> r[i];
    }
    long long total = 0;
    for (int i=0; i<n; i++) {
        total += (r[i] - l[i]) * p1;
        if (i != n - 1) {
            int between = l[i+1] - r[i];
            if (between <= t1) {
                total += between * p1;
                continue;
            } else {
                total += t1 * p1;
                between -= t1;
            }

            if (between <= t2) {
                total += between * p2;
                continue;
            } else {
                total += t2 * p2;
                between -= t2;
            }
            total += between * p3;
        }
    }
    cout << total << endl;
    return 0;
}
