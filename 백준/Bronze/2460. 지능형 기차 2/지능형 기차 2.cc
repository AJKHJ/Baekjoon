#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int N, M;
    int v[10];

    for(int i = 0 ; i < 10 ; i++){
        cin >> N >> M;
        if(i == 0)
            v[i] = M - N;
        else
            v[i] = v[i-1] + M - N;
    }
    sort(v, v + 10);
    cout << v[9];
    return 0;
}