#include <bits/stdc++.h>
#define FIN                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;

struct Laptop {
    int price;
    int quality;
};

bool compareLaptops(Laptop l1, Laptop l2) {
    return l1.price < l2.price;
}

int main() {
    int n;
    cin >> n;
    Laptop laptops[n];
    for (int i = 0; i < n; i++) {
        cin >> laptops[i].price >> laptops[i].quality;
    }
    sort(laptops, laptops + n, compareLaptops);
    int maxQuality = laptops[0].quality;
    for (int i = 1; i < n; i++) {
        if (laptops[i].quality < maxQuality) {
            cout << "Happy Alex" << "\n";
            return 0;
        }
        maxQuality = max(maxQuality, laptops[i].quality);
    }
    cout << "Poor Alex" << "\n";
    return 0;
}