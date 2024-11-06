#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int x, y, n;
        cin >> x >> y >> n;
        int cnt  = 0;
        while (x <= n && y <= n) {
            if (x < y) {
                x += y;
            } else {
                y += x;
            }
            cnt ++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
