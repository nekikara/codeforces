#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    list<string> C;
    long long count = 0;
    for (string cmd; getline(cin, cmd);) {
        char f = cmd.at(0);
        switch (cmd.at(0)) {
        case '+':
            C.push_back(cmd.substr(1));
            break;
        case '-':
            C.remove(cmd.substr(1));
            break;
        default:
            int pos = cmd.find(':') + 1;
            string msg = cmd.substr(pos);
            count += C.size() * msg.size();
            break;
        }
    }
    cout << count << endl;
    return 0;
}
