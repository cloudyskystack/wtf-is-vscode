#include <iostream>

using namespace std;

/**
 * E: Name of event
 * Y: Year of event
 * M: Month of event
 * D: Day of event
 */
 string solve(string E, int Y, int M, int D) {
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
        cout << "we got " << E << " before gta6\n";
    } else {
        cout << "we got gta6 before " << E << "\n";
    }
    return "";
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; i++) {
        string E;
        getline(cin, E);
        int D, M, Y;
        cin >> Y >> M >> D;
        cin.ignore();
        cout << solve(E, Y, M, D) << '\n';
    }
}
