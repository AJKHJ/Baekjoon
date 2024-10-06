#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int N;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin >> N;
    v.resize(N);
    for(int i = 0 ; i < N ; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0 ; i < N ; i++){
        if(v[i-1] != v[i])
            cout << v[i] << " ";
    }


    return 0;
}