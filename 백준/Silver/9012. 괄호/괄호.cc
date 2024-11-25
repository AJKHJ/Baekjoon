#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(){
    string S ;
    cin >> S;

    int N = S.size();
    int cnt = 0;
    for(int i = 0 ; i < N ; i++){
        if(S[i] == '(')cnt++;
        else{
            cnt --;
            if(cnt <0){
                cout <<"NO\n";
                return;
            }
        }
    }
    if(cnt == 0) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);   
    cin.tie(0); cout.tie(0);
    int N;
    cin >> N;

    while (N != 0) {
        solve();
        N--;
    }
}

