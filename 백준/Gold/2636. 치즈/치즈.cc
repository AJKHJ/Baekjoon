#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int arr[104][104];
int visited[104][104];
int n , m , cnt = 0 , cnt2 =0;
vector<pair<int,int>>v;
int dx[4] = { 0 , 1, 0  , -1};
int dy[4] = {-1 , 0 , 1 , 0};


void go(int y, int x){
    visited[y][x] = 1;
    if(arr[y][x] == 1){
        v.push_back({y,x});
        return;
    }
    for(int i = 0 ; i < 4 ; i++){
        int ny = dy[i] + y;
        int nx = dx[i] + x;
        if(nx < 0 || ny < 0 || nx >= m || ny >= n || visited[ny][nx] == 1) continue;
        go(ny, nx);

    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    
    cin >> n >> m;
    for(int i =0  ; i < n ; i ++){
        for(int j = 0 ; j < m ; j++){
            cin >> arr[i][j];
        }
    }
    while(1){
        fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
        v.clear();
        bool chk = 0;
        go(0,0);
        cnt2 = v.size();
        for(pair<int, int> b : v){ 
            arr[b.first][b.second] = 0;
        }
           
        for(int i =0  ; i < n ; i ++){
           for(int j = 0 ; j < m ; j++){
                if(arr[i][j] == 1){
                    chk = 1;
                }
            }
        }
        cnt++;
        if(!chk) break;
    }
    cout << cnt << '\n' << cnt2;
    return 0;
}