#include <iostream>
using namespace std;

int main() {
    int n, d, tmp, r;
    cin >> n >> d;

    int b[n];
    for(int i=0; i<n; i++) {
        cin >> b[i];
    }

    tmp = 0;
    r = 0;
    for(int i=1; i<n; i++) {
        if (b[i] <= b[i-1]) {
            tmp = (b[i-1] - b[i]) / d + 1;
            b[i] += tmp * d;
            r += tmp;
        }
    }
    cout << r << endl;
    return 0;
}
