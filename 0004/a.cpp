#include <iostream>
using namespace std;

bool isEven(int w) {
    return (w % 2 == 0);
}

int main () {
    int w;
    cin >> w;
    w -= 2;
    if (w == 0) {
        cout << "NO\n";
        return 0;
    }
    if (isEven(w)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
