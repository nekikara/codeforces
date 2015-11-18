#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string piece;
    string goal;
    cin >> piece;
    cin >> goal;
    int s_x = piece[0] - 0;
    int s_y = (int)piece[1];
    int t_x = goal[0] - 0;
    int t_y = (int)goal[1];
    int dx = s_x - t_x;
    int dy = s_y - t_y;

    vector<string> paths;
    while (!(dx == 0 && dy == 0)) {
        string c = "", r = "";
        if (dx < 0) {
            dx += 1;
            c ="R";
        } else if (dx > 0) {
            dx -= 1;
            c= "L";
        }
        if (dy < 0) {
            dy += 1;
            r = "U";
        } else if (dy > 0) {
            dy -= 1;
            r = "D";
        }
        paths.push_back(c + r);
    }
    cout << paths.size() << endl;
    for (int i=0; i < paths.size(); i++) {
        cout << paths[i] << endl;
    }
    return 0;
}
