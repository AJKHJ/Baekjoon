#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int t;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int apt[15][15];
    int k , n;
    cin >> t;
 
    while(t--){
        int k, n; 
        cin >> k >> n;
        
        for (int i=0; i <= k; i++){
            for (int j=1; j <= n; j++){
                if (i == 0) {
                    apt[0][j] = j;
                }
                else if (j == 1){
                    apt[i][1] = 1;
                }
                else {
                    apt[i][j] = apt[i][j-1] + apt[i-1][j];
                } 
            }
        }
        cout << apt[k][n] << "\n";
    }
}