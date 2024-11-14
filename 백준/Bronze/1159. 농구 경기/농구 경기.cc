#include <bits/stdc++.h>

using namespace std;

int n, a;
int cnt[26];
string str;
vector<char> s;
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;
        cnt[str[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (cnt[i] >= 5) {
            s.push_back(char(i + 'a'));
        }
    }

    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
    }

    if (s.size() == 0)
        cout << "PREDAJA";
}