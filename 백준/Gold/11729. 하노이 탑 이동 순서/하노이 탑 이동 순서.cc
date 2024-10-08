#include <iostream>
#include <vector>
using namespace std;

int n;
vector<pair<int, int>> ans;

void f(int m, int a, int b, int c) {
    if (m == 1) {
        ans.push_back({a, c});
        return;
    }

    f(m - 1, a, c, b);
    f(1, a, b, c);
    f(m - 1, b, a, c);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    f(n, 1, 2, 3);
    cout << ans.size() << '\n';
    
    for (size_t i = 0; i < ans.size(); ++i) {
        cout << ans[i].first << " " << ans[i].second << '\n';
    }

    return 0;
}