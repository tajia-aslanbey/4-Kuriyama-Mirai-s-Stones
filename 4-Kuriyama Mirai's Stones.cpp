#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long> v(n), u(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        u[i] = v[i];
    }

    sort(u.begin(), u.end());
    vector<long long> p1(n + 1, 0), p2(n + 1, 0);
    for (int i = 0; i < n; i++) {
        p1[i + 1] = p1[i] + v[i];
        p2[i + 1] = p2[i] + u[i];
    }

    int m;
    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            cout << p1[r] - p1[l - 1] << '\n';
        } else {
            cout << p2[r] - p2[l - 1] << '\n';
        }
    }

    return 0;
}
