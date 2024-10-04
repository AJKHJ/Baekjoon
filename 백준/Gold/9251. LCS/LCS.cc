#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int N, M;
string S,T;
int dp[1010][1010];

int main(){
    ios_base::sync_with_stdio(0);   
    cin.tie(0); cout.tie(0);

    cin >> S >> T;
    N= S.size();
    M = T.size();
    S = '!' + S;
    T = '!' + T;

    for(int i = 1; i <= N ; i++){
        for(int j = 1; j <= M ; j++){
            dp[i][j] = max(dp[i][j], dp[i-1][j]);
            dp[i][j] = max(dp[i][j], dp[i][j-1]);
            if(S[i]==T[j]) dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
        }
    }

    cout << dp[N][M];

}