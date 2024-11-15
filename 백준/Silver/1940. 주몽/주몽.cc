#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[1000001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i + 1; j < n; j++) {
            int sum = 0;
            sum = arr[i] + arr[j];
            if (sum == m)
                cnt++;
        }
    }
    cout << cnt;
}