#include <iostream>
using namespace std;

int main() {

    string s[7] = {"0/1", "1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};

    int a, b, ans;
    cin >> a >> b;
    for (int i=1; i<=6; i++) {
        if(a <= i && b <= i) {
            ans++;
        }
    }
    cout << s[ans] << endl;
    return 0;
}
