#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int T,c;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin >> T;
    string str;
    for(int i = 0 ; i < T ; i++){
        cin >> c >> str;
        for(int j = 0 ; j < str.length(); j++){
            if(j != c - 1){
                cout << str[j];
            }
        }
        cout << '\n';
    }
    return 0;
}