#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int N, M, c;
    cin >> N;
    vector<int> v1;
    for(int i = 0 ; i < N ; i++){
        cin >> c;
        v1.push_back(c);
    }

    sort(v1.begin(), v1.end());
    
    cin >> M;
    for(int i = 0 ; i < M ; i++){
        cin >> c;
        cout << binary_search(v1.begin(), v1.end() , c) << " ";
    }
    return 0;
}