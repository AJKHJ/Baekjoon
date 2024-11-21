#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int h, w;
char arr[104][104];
int arr2[104][104];
char c;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    cin >> h >> w;
    
    for(int i = 0 ; i < h ; i++){
        for(int j = 0 ; j < w ; j++){
            cin >> c;
            arr[i][j] = c;
            if(c == 'c'){
                arr2[i][j] = 0;
            }
            else{
                arr2[i][j] = -1;
            }
        }
    }
    for(int i = 0 ; i < h ; i++){
        int lastCloud = -1;
        for(int j = 0 ; j < w ; j++){
            if (arr[i][j] == 'c') {
                lastCloud = j;
                arr2[i][j] = 0;
            } else if (lastCloud != -1) {
                arr2[i][j] = j - lastCloud;
            }
        }
    }
    for(int i = 0 ; i < h ; i++){
        for(int j = 0 ; j < w ; j++){
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}