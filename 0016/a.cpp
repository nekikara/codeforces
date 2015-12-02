#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char pre = 'a';

    for (int i=0; i<n; i++) {
        string f;
        cin >> f;
        for (int j=1; j<m; j++) {
            if (f[0] != f[j]) {
                cout << "NO\n";
                return 0;
            }
        }
        if (f[0] == pre) {
            cout << "NO\n";
            return 0;
        } else {
            pre = f[0];
        }
    }
    cout << "YES\n";
    return 0;
}
