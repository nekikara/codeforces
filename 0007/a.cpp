#include <iostream>
#include <string>
using namespace std;

int b_length(string s) {
    int c = 0;
    for (int i=0; i<8; i++) {
        if (s[i] == 'B') {
            c++;
        }
    }
    return c;
}

int main() {
    int count = 0;
    int column = 0;
    for (int i=0;i<8; i++) {
        string row;
        cin >> row;
        int b = b_length(row);
        if (b == 8) {
            count++;
        } else if (column == 0) {
            count += b;
            column++;
        }
    }

    cout << count << endl;
    return 0;
}
