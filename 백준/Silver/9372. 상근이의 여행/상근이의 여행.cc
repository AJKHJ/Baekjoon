#include <iostream>
using namespace std;

int T, N , M,a , b;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        cin >> N >> M;
        for(int j = 0 ; j < M ; j++){
            cin >> a >> b;
        }
        cout << N - 1 << "\n";
    }
    return 0;
}