#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int arr[1000];

    int idx = 0;
    int A, B;
    int sum = 0;
    cin >> A >> B;
    for(int i = 1; i <= 1000 ; i++){
        for(int j = 0;  j< i && idx < 1000; j++){
            arr[idx++] = i;
        }
    }

    for(int i = A -1; i < B ; i++){
        sum += arr[i];
    }

    cout << sum;
    return 0;
}