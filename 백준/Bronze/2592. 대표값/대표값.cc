#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;
int arr[1001];

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int c, res;
    int sum = 0, max = 0;
    for(int i = 0 ; i < 10 ; i++){
        cin >> c;
        sum += c;
        arr[c]++;

        if(max < arr[c]){
            max = arr[c];
            res = c;
        }        
    }
    cout << sum / 10 << '\n' << res;

    return 0;
}