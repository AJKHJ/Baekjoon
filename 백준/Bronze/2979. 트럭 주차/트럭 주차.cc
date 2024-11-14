#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int sum = 0;
int cnt[104];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b >> c;

    int t1, t2;
    for (int i = 0; i < 3; i++) {
        cin >> t1 >> t2;
        for (int j = t1; j < t2; j++)
            cnt[j]++;
    }

    for (int j = 1; j < 100; j++) {
        if (cnt[j] == 1)
            sum += a;
        if (cnt[j] == 2)
            sum += b * 2;
        if (cnt[j] == 3)
            sum += c * 3;
    }

    cout << sum;
}