#include <map>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string names[1001];
    int scores[1001];
    map<string, int> game;
    map<string, int> game2;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> names[i] >> scores[i];
        game[names[i]] += scores[i];
    }
    int M = -1000;
    for (map<string, int>::iterator it=game.begin(); it != game.end(); it++) {
        if (M < it->second) {
            M=it->second;
        }
    }
    for (int i=0; i<n; i++) {
        game2[names[i]] += scores[i];
        if (M == game[names[i]] && M <= game2[names[i]]) {
            cout << names[i] << endl;
            return 0;
        }
    }
    return 0;
}
