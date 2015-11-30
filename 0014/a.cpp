#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int l = m, r = 0;
    vector<string> S;
    int b = 0;
    int u = -1;
    for (int i=0; i<n; i++){
        string s;
        cin >> s;
        int le = s.find("*");
        int ri = s.rfind("*");
        if (0 <= le && 0 <= i && -1 == u) u = i;
        if (0 <= le && le < l) l = le;
        if (r < ri && ri <= m) r = ri;
        if (le != -1 || ri != -1) b = i;
        S.push_back(s);
    }


    if (0 <= u) {
        for(int i=u; i<b+1; i++) {
            cout << S.at(i).substr(l,r-l+1) << endl;
        }
    }

    return 0;
}
