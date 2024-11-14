#include <bits/stdc++.h>

using namespace std;

string str;
int j;
int cnt = 0;

int main() {
    cin >> str;
    int j = str.size() - 1;
    for (int i = 0; i < str.size() / 2; i++) {

        if (str[i] == str[j]) {
            cnt++;
        }
        j--;
    }

    if (cnt == str.size() / 2) {
        cout << 1;
    } else
        cout << 0;
}