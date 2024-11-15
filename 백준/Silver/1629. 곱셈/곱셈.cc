#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll A,B,C;

long long POW(ll A, ll B, ll C) {
    if (B == 0) return 1;
    ll tmp = POW(A, B/2, C);
    tmp = tmp * tmp % C;
    if (B % 2 == 0) return tmp; 
    else return tmp * A % C; 
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> A >> B >> C;

    cout << POW(A , B, C);

}