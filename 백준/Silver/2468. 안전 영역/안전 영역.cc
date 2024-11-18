#include <bits/stdc++.h>

using namespace std;
int n, a[101][101], b[101][101] , visited[101][101], ret;
int dy[4] = {-1 , 0 , 1 , 0};
int dx[4] = {0 , 1 , 0 , -1};
int max2 = 0;

void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i = 0 ; i < 4 ; i ++){
        int ny = dy[i] + y;
        int nx = dx[i] + x;
        if(ny >= n || nx >= n || ny < 0 || nx < 0) continue;
        if(b[ny][nx] == 1 && visited[ny][nx] == 0)
            dfs(ny,nx);
    }
}

int main(){
    int max = 0;
    cin >> n;
    ret = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
            if(max < a[i][j])
                max = a[i][j];
        }
    }
    while(max != 0){
        ret = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                visited[i][j] = 0;
                if(a[i][j] < max)
                    b[i][j] = 0;
                if(a[i][j] >= max)
                    b[i][j] = 1;    
            }
        }
        for(int i = 0 ; i < n;  i++){
            for(int j = 0 ; j < n ; j++){
                if(visited[i][j] == 0 && b[i][j] == 1){
                    dfs(i,j);
                    ret++;
                }
            }
            if(max2 < ret){
                max2 = ret;
            }
        }
        max--;
    }
    
    cout << max2;
}