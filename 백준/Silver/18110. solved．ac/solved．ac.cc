#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
#include <cmath>
#include<math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int n , b;
    double sum = 0;
    cin >> n;
    vector<double>v(n);
    if (n == 0) {
		cout << 0 << endl; 
        return 0;
	}
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    b = round(n * 0.15);

    for(int i = b ; i < n - b ; i++){
        sum += v[i];
    }

    cout << round(sum / ( n - b * 2));
    return 0;
}