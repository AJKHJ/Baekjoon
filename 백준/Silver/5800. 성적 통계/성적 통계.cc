#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int K, N, c;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    cin >> K;
    for(int i = 0; i < K ; i++){
        int largest = 0;
        cin >> N;
        for(int j = 0 ; j < N ; j++){
            cin >> c;
            v.push_back(c);
        }
        sort(v.begin(), v.end() , greater<int>());

        for(int k = 0 ; k < v.size() ; k++){
            if(v[k-1] - v[k] > largest)
                largest = v[k-1] - v[k];
        }
        
        cout << "Class " << i + 1 << endl;
        cout << "Max " << v[0] << ", Min " << v[N-1] << ", Largest gap " << largest << endl;
        v.clear();
    }
    return 0;
}