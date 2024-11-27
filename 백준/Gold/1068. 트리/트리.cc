#include<bits/stdc++.h>
using namespace std;
int n, r, temp, root;
vector<int> adj[54];

int dfs(int here){
    int ret = 0;
    int child = 0;
    for(int there : adj[here]){
        if(there == r) continue; //해당 노드 탐색 X
        ret += dfs(there); //return 한 값 plus
        child++; //자식노드 있는 지 확인 = 리프노드 아님
    }
    if(child == 0) return ret = 1; //자식노드 없으니 ret =1 return
    return ret;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == -1)root = i;
        else adj[temp].push_back(i);
    }
    cin >> r;
    if(r == root){
        cout << 0 << "\n";
        return 0;
    }
    cout << dfs(root) << "\n";
    return 0;
}
