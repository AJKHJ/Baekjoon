#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int N, T, P;
    cin >> N;
    int cntT =0;
    vector<int>a;
    a.resize(6);
    for(int i = 0 ; i < 6; i++){
        cin >> a[i];
    }
    cin >> T >> P;

    for(int i = 0 ; i < 6; i++){
        cntT += (a[i] / T + (a[i] % T > 0));
    }

    cout << cntT << '\n';
    cout << N / P << " " << N % P;

    return 0;
}