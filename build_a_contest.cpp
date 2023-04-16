#include <bits/stdc++.h>
#define FIN                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;


int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> used(n + 1, false); 
    vector<int> difficulties(m);
    vector<bool> rounds(m);
    int count = 0;

    for (int i = 0; i < m; i++) {
        cin >> difficulties[i];

        if (!used[difficulties[i]]) {
            used[difficulties[i]] = true;
            count++;
        }

        if (count == n) {
            rounds[i] = true;
            for (int j = 0; j < n + 1; j++) {
                used[j] = false;
            }
            used.assign(n + 1, false);
            count = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        cout << rounds[i];
    }
    cout << endl;

    return 0;
}