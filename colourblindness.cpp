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
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool same = true;
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i] && !(s1[i] == 'G' && s2[i] == 'B') && !(s1[i] == 'B' && s2[i] == 'G')) {
                same = false;
                break;
            }
        }
        if (same) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
