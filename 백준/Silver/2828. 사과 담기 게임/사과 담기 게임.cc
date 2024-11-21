#include <bits/stdc++.h>

using namespace std;
int n , m, j, a, ret;
vector<int>v;
int main(){
    cin >> n >> m;
    cin >>j;
    int l = 1;
    for(int i = 0 ; i < j ; i++){
        int r = l + m - 1;
        cin >> a;
        if(a >= l && a <= r) continue;
        else{
            if(a < l){
                ret += (l - a);
                l = a;
            }else{
                l+= (a - r);
                ret += (a-r);
            }
        }
    }
    cout << ret << "\n";
}
