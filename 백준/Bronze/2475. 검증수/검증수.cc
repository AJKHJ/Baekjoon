#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int N = 5 , sum = 0;;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    
    v.resize(5);
    
    
    for(int i = 0 ; i < 5 ; i++){
        cin >> v[i];
        v[i] *= v[i];
        sum += v[i];
    }

     cout << sum % 10;

    return 0;
}