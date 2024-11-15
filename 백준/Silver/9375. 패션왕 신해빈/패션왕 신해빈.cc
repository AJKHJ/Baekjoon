#include <bits/stdc++.h>

using namespace std;
int n, a, b;
string s1, s2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        map<string, int> mp;
        cin >> a;
        for (int j = 0; j < a; j++) {
            cin >> s1 >> s2;
            mp[s2]++;
        }
        long long rel = 1;
        for (auto it : mp) {
            rel *= ((long long)it.second + 1);
        }
        rel--;
        cout << rel << "\n";
    }
}