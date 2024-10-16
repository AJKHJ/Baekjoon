#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    vector<int>v1(3);
    vector<int>v2(2);
    for(int i = 0 ; i < 3 ; i++)
        cin >> v1[i];
    for(int i = 0 ; i < 2 ; i++)
        cin >> v2[i];

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    cout << v1[0] + v2[0] - 50;
    return 0;
}