#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    vector<int> v;
    int c;
    for(int i = 0 ; i < 3 ; i++){
        cin >> c;
        v.push_back(c);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < 3 ; i++) cout << v[i] << " ";
    return 0;
}