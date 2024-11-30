#include <iostream>
using namespace std;

int main() {
    int s, a, num, sum = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> s >> a;
        sum += a%s;
    }
    cout << sum << '\n';
}