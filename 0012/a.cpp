#include <iostream>
#include <list>
using namespace std;

string reverse(string str) {
    string ret = "";
    for (int i=str.size() - 1; 0 <= i; i--) {
        ret += str[i];
    }
    return ret;
}

int main() {
    string T = "";

    for (string t; getline(cin, t);) {
        T += t;
    }
    string rev = reverse(T);

    if (T == rev)
        cout << "Yes";
    else
        cout << "NO";
    cout << endl;

    return 0;
}
