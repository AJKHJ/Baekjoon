#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    
    int A,B,C;
    cin >> A >> B >> C;
    int rel = A * B * C;
    int arr[10] = {0, };
    while (rel != 0)
    {
        arr[rel % 10]++;
        rel/=10;
    }
    
    for(int i = 0 ; i < 10 ; i++){
        cout << arr[i] << '\n';
    }


    return 0;
}