#include <iostream>
#include <vector>
using namespace std;
int N, ans;
bool ok;
void go(int i, vector<int> &pos){
    if(i > N){
        ans++;
        return;
    }

    for(int j = 1; j <= N ; j++){
        // 현재칸 :(i,j)
        ok = 1;
        for(int k = 1; k < i; k++){
            if(pos[k] == j || k + pos[k] == i+j || k-pos[k] == i-j){
                ok=0;
                break;
            }
        }
        if(ok){
            pos[i] = j;
            go(i+1, pos);
            pos[i] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin >> N;
    vector<int> pos(N+1);
    go(1,pos);

    cout << ans;
}