#include <bits/stdc++.h>
#define FIN                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;

int main() {
    FIN;
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<int> lengths(n);
    for (int i = 0; i < n; i++)
    {
        int index = s[i] - 'a' + 1;
        lengths[i] = (i > 0 ? lengths[i - 1] : 0) + index;
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << lengths[r - 1] - (l > 1 ? lengths[l - 2] : 0) << "\n";
    }

    return 0;
}