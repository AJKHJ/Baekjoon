#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, y, x ,ret = 0;
int arr[104][104];
int visited[104][104];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs (int y, int x, int d){
    visited[y][x] = 1;
    for(int i = 0 ; i < 4 ; i++){
        int ny = dy[i] + y;
        int nx = dx[i] + x;
        if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if(visited[ny][nx] == 1 ) continue;
        if(!visited[ny][nx] && arr[ny][nx] > d)
            dfs(ny, nx, d);
    }
    return ;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    cin >> n;

    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j++){
            cin >> arr[i][j];
        }
    }

    for(int d = 0 ; d < 101; d++){
        fill(&visited[0][0] , &visited[0][0] + 104 * 104, 0);
        int cnt = 0;
        for(int i = 0 ; i < n ; i ++){
            for(int j = 0 ; j < n ; j++){
                if(visited[i][j] == 0 && arr[i][j] > d){
                    cnt++;
                    dfs(i,j,d);
                }
            }
        }
        ret = max(ret, cnt);
    }
    cout << ret;
    return 0;
}