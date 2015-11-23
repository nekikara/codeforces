#include <iostream>
#include <string>
using namespace std;

string reverse(string str) {
    string rev = "";
    for (int i=str.size() - 1; 0 <= i; i--) {
        rev.push_back(str[i]);
    }
    return rev;
}


int main() {
    int forward = 0;
    int backward = 0;
    string flags;
    cin >> flags;

    string rev = reverse(flags);

    string f, s;
    cin >> f;
    cin >> s;

    int a = flags.find(f);
    if (flags.find(f)!=-1)
        if(flags.substr(flags.find(f)+f.size()).find(s)!=-1)
            forward++;
    if (rev.find(f)!=-1)
        if(rev.substr(rev.find(f)+f.size()).find(s)!=-1)
            backward++;

    if (forward == 0 && backward == 0) {
        cout << "fantasy\n";
    } else if (forward == 1 && backward == 0) {
        cout << "forward\n";
    } else if (forward == 0 && backward == 1) {
        cout << "backward\n";
    } else {
        cout << "both\n";
    }

    return 0;
}
