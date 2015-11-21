#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int stick[4];
    cin >> stick[0] >> stick[1] >> stick[2] >> stick[3];

    string t = "IMPOSSIBLE";
    for (int i=0; i<2; i++) {
        for (int j=i+1; j<3; j++) {
            for (int k=j+1; k<4; k++) {
                int M = max(stick[i], stick[j]);
                M = max(stick[k], M);
                int asum = stick[i] + stick[j] + stick[k];
                if (asum > M * 2) {
                    t = "TRIANGLE";
                } else if (asum == M * 2 && t == "IMPOSSIBLE") {
                    t = "SEGMENT";
                }
            }
        }
    }
    cout << t << endl;
    return 0;
}
