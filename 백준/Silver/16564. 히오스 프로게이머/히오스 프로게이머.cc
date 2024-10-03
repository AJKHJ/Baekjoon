#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int N, K, T, ans;
vector <int> v;

bool ok(int x){
    long long needed = 0;
    for (int i = 0; i < N; i++) {
        if (v[i] < x) {
            needed += (x - v[i]);
        }
    }
    return needed <= K;
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin >> N >> K;
    v.resize(N);

    for(int i = 0 ; i < N  ; i++){
        cin >> v[i];
    }
    sort(v.begin() , v.end());
    int le = v[0] ;
    int ri = v[0] + K;
    ans = le;

    while(le <= ri){
        int md = (le + ri )/ 2;
        if(ok(md)){
            ans = md;
            le = md + 1;
        }
        else ri = md - 1;
    }

    cout << ans;

    return 0;
}