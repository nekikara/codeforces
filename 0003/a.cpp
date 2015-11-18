#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
map<char, int> R
{
    {'a', 0},
    {'b', 1},
    {'c', 2},
    {'d', 3},
    {'e', 4},
    {'f', 5},
    {'g', 6},
    {'h', 7}
};

map<int, int> C {
    {7, 0},
    {6, 1},
    {5, 2},
    {4, 3},
    {3, 4},
    {2, 5},
    {1, 6},
    {0, 7},
}

string switchString(string str) {
    char f = str[0];
    char s = str[1];
    str[1] = f;
    str[0] = s;
    return str;
}

int main() {
    string piece;
    string goal;
    cin >> piece;
    cin >> goal;

    string s_piece = switchString(piece);
    string g_piece = switchString(goal);

    

    return 0;
}
