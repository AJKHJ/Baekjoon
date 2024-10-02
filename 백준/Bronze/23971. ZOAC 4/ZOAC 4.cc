#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    int h, w, n, m;
    cin >> h >> w >> n >> m;
    
    int col, row;
    
    if(h%(n+1) != 0)    
        col = (h/(n+1)) + 1;
    else    
        col = (h/(n+1));
    if((w%(m+1)) != 0)    
        row = (w/(m+1)) + 1;
    else
        row = (w/(m+1));
    
    cout << col * row;

    return 0;
}