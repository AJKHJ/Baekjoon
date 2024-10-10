#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int N;
    cin >> N;
    vector<int> v;
    v.resize(N);
    for(int i = 0 ; i < N ; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[0] * v[N-1];
    return 0;
}