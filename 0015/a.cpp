#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<pair<float, float> > C(n);
    for(int i=0; i<n; i++) {
        float x, a;
        cin >> x >> a;
        C[i] = make_pair(x, a);
    }
    sort(C.begin(), C.end());

    int count = 0;
    for (int i=0; i<C.size()-1; i++){
        float space = (C[i+1].first - C[i+1].second/2) - (C[i].first + C[i].second/2);
        if (space == t)
            count++;
        else if (t < space)
            count += 2;
    }

    cout << count + 2 << endl;

    return 0;
}
