#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int N, M ;
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> M;
        int ans = 0;
        while(M > 0){
            if( M % 2 == 1){
                cout << ans << " ";
            }
            M /= 2 ;
            ans ++;
        }
    }
    return 0;
}