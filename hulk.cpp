#include <bits/stdc++.h>
#define FIN                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;

int main() {
    FIN;
    int n;
    cin >> n;

    string feeling = "I hate";
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            feeling += " that I love";
        } else {
            feeling += " that I hate";
        }
    }

    feeling += " it";
    cout << feeling << "\n";
    return 0;
}
