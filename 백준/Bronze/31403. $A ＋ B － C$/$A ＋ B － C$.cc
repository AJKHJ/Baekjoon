#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    string A,B,C;
    cin >> A >> B >> C;
    cout << stoi(A) + stoi(B) - stoi(C) << endl;
    cout << stoi(A+B) - stoi(C);

    return 0;
}