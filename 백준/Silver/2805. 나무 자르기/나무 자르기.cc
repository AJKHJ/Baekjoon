#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long int ll;

int N;
ll M, A[10202020];

int ok(ll x){
    ll sum = 0;
    for( int i = 0 ; i < N ; i++){
        if(A[i] > x) sum +=(A[i] - x);
    }
    if(sum >= M) return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin >> N >> M;

    for(int i = 0; i < N ; i++)
        cin >> A[i];

    ll le = 0, ri = 2e9, ans = 0;
    while(le<=ri){
        ll md = (le + ri) / 2;
        if(ok(md)){
            ans = md;
            le=md+1;
        }
        else ri = md - 1;
    }
    cout << ans;
    return 0;
}