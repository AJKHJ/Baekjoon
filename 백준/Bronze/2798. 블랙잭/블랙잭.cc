#include <iostream>
using namespace std;

int main(){
    int n, m;
    int sum = 0;
    int max = 0;

    cin >> n >> m;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i < n - 2; i++){
        for(int j = i + 1 ; j < n -1; j++){
            for(int k = j + 1 ; k < n ; k++){
                sum = arr[i] + arr[j] + arr[k];
                if(sum <= m && max < sum){
                    max = sum;
                }
            }
        }
    }
    cout << max;
}  