#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a;
    cin >> b;


    if (a >= 3 && b <= 4) {
        cout << "TroyMartian\n";
    }

    if (a <= 6 && b >= 2) {
        cout << "VladSaturnian\n";
    }

    if (a <= 2 && b <= 3) {
        cout << "GraemeMercurian\n";
    }

    return 0;
}