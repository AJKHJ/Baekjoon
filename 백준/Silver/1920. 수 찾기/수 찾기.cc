#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int a, b, n;
    cin >> a;
    vector<int> v(a);

    for(int i = 0 ; i < a; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    cin >> b;
    for(int i = 0 ; i < b ; i++){
        cin >> n;
        if(binary_search(v.begin(), v.end() , n)){
            cout << "1" << "\n";
        }
        else   
            cout << "0" << "\n";
    }
    return 0;
}
