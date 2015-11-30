#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    string str = "..........";
    int l = str.find("*");
    int r = str.rfind("*");
    cout << l <<endl;
    cout << r << endl;
    */


    int n, m;
    cin >> n >> m;
    int l = m / 2, r = m / 2;
    vector<string> S;
    for (int i=0; i<n; i++){
        string s;
        cin >> s;
        int le = s.find("*");
        int ri = s.rfind("*");
        if (le == -1 && ri == -1 && (i == 0 || i == n - 1)) continue;
        if (0 <= le && le < l) l = le;
        if (r < ri && ri <= m) r = ri;
        S.push_back(s);
    }

    for(int i=0; i<S.size(); i++) {
        cout << S.at(i).substr(l,r-l+1) << endl;
    }

    return 0;
}
