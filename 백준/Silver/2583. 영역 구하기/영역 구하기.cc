#include <bits/stdc++.h>

using namespace std;
int n, m ,a[101][101], b[101][101] , visited[101][101], ret , k, cnt;
int dy[4] = {-1 , 0 , 1 , 0};
int dx[4] = {0 , 1 , 0 , -1};
vector<int> v;


int dfs(int y , int x){
    visited[y][x] = 1;
    int v = 1;
    for(int i = 0 ; i < 4 ; i++){
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
        if(visited[ny][nx] == 0 && a[ny][nx] == 0){
            v += dfs(ny,nx);
        }
    }
    return v;
}

int main(){
    int x1, y1, x2, y2;
    ret = 0;
    cin >> n >> m >> k;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j++){
            a[i][j] = 0;
        }
    }
    
    while(k != 0){    
        scanf("%d %d %d %d", &x1, & y1, &x2, &y2);
        for(int i = y1; i < y2 ; i++){
            for(int j = x1 ; j < x2 ; j++){
                a[i][j] = 1;
            }
        }
        k--;
    }

    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j++){
            if(visited[i][j] == 0 && a[i][j] != 1){
                v.push_back(dfs(i,j));
            }
        }
    }


    cout << v.size() << '\n';
    sort(v.begin() ,v.end());
    for(int a : v) cout << a << " ";
    return 0;
}
