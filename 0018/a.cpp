#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int segment(int x1, int y1, int x2, int y2) {
    int x = x2 - x1;
    int y = y2 - y1;
    return (x * x + y * y);
}

bool right_angled(int a, int b, int c) {
    int A = a;
    int B = b;
    int C = c;
    if (A == 0 || B == 0 || C == 0) return false;
    if (A + B == C){
        return true;
    } else if (B + C == A) {
        return true;
    } else if (C + A == B) {
        return true;
    } else {
        return false;
    }
    return false;
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int cordi[] = {x1, y1, x2, y2, x3, y3};
    string out = "NEITHER\n";
    for (int i=0; i<6; i++) {
        int x = cordi[i];
        for (int j=-1; j<=1; j++) {
            cordi[i] += j;
            int a = segment(cordi[0], cordi[1], cordi[2], cordi[3]);
            int b = segment(cordi[2], cordi[3], cordi[4], cordi[5]);
            int c = segment(cordi[4], cordi[5], cordi[0], cordi[1]);
            //cout << "j: " << j << "\n" << a << ", " << b << ", " << c << endl;
            if (right_angled(a, b, c)) {
                if (j==0) {
                    cout << "RIGHT\n";
                    return 0;
                } else {
                    //cout << "almost: " << a << ", " << b << ", " << c << endl;
                    out = "ALMOST\n";
                }
            }
            cordi[i] = x;
        }
    }
    cout << out;
    return 0;
}
