#include <iostream>
#include <vector>
using namespace std;

#define MAX 1000000
int arr[MAX] {0 ,};


int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int M, N;
    cin >> M >> N;

    for(int i = 2; i <= N; i++){
        arr[i] = i;
    }

    for(int i = 2 ; i  * i <= N; i++){
        if(arr[i] == 0)
            continue;
        for(int j = i * i ; j<=N; j+= i){
            arr[j] = 0;
        }
    }

    for(int i = M; i<= N; i++){
        if(arr[i] != 0){
            cout << arr[i] << '\n';
        }
    }
}
