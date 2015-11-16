#include <iostream>
using namespace std;

long long mod(long long a, long long s) {
    int m = s % a;
    if ( m == 0 ) {
        return 0;
    } else {
        return 1;
    }
}



int main()
{

    long long n, m, a;
    cin >> n >> m >> a;

    long long r, c;
    r = n / a + mod(a, n);
    c = m / a + mod(a, m);

    cout << r * c << endl;

    return 0;
}
