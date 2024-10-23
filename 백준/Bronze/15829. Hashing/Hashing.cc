#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

int r = 31;
int M = 1234567891;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    int l;
    long long hash = 0, R = 1;
    string str;

    cin >> l >> str;

    for (int i = 0; i < str.length(); i++) {
        hash += ((str[i] - 'a' + 1) * R) % M; 
        hash %= M;
        R = (R * r) % M;
    }
    cout << hash;
}