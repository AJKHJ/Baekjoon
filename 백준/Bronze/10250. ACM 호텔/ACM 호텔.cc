#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int T;
    int H, W , N;
    int k , w;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        cin >> H >> W >> N;
        
        int floor = N % H;
        int room = N / H + 1;
        if(floor == 0){
            floor = H;
            room = N / H;
        }
        int number = floor * 100 + room;
        cout << number << endl;
    }


    return 0;
}