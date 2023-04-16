#include <bits/stdc++.h>
#define FIN                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;

int main() {
    FIN;
    int t;
    cin >> t;

    while (t--) {
        int h, m;
        cin >> h >> m;

        int total_minutes = (23 - h) * 60 + (60 - m);
        cout << total_minutes << "\n";
    }
}
