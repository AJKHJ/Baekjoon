#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int c;
    int sum = 0;
    vector<pair<int, int> > v;
    vector<int> arr;
    for(int i = 0 ; i < 8 ; i++){
        cin >> c;
        v.push_back(make_pair(c, i+1));
    }
    sort(v.begin(), v.end());

    for(int i = 3 ; i< 8 ; i++){
        sum += v[i].first;
        arr.push_back(v[i].second);
    }
    sort(arr.begin(), arr.end());
    cout << sum << '\n';
    
    for(int i = 0 ; i< 5 ; i++){
        cout << arr[i] << " ";
    }
    
    
    return 0;
}