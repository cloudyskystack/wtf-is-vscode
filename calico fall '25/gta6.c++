#include <iostream>
#include <string>
using namespace std;

int solve(string E, int Y, int M, int D) {
    bool before;
    if (Y == 2026) {
        if (M == 11) {
            if (D < 19) {
                before = true;
            } else {
                before = false;
            }
        } else if (M < 11) {
            before = true;
        } else {
            before = false;
        }
    } else if (Y < 2026) {
        before = true;
    } else {
        before = false;
    }
    
    if (before) {
        cout << "we got " << E << " before gta6";
    } else {
        cout << "we got gta6 before " << E;
    }
    return 0;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        string E;
        int Y, M, D;
        getline(cin, E);
        cin >> Y >> M >> D;
        solve(E, Y, M, D);
    }
}