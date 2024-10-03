#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

long long N, M, budget, ans;
vector<int> v;

bool ok(int x){
    long long sum =0;
    for(int i = 0 ; i < N ; i++){
        sum += min(v[i], x);
    }
    if(sum <= budget)
        return 1;
    
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        cin >> M;
        v.push_back(M);
    }
    cin >> budget;

    long long le = 0;
    long long ri = *max_element(v.begin(), v.end());
    while(le <= ri){
    long long mid = ( le + ri )/ 2;
        if(ok(mid)){
            ans = mid;
            le = mid + 1;
        }
        else
            ri = mid - 1;
    }

    cout << ans;


    return 0;
}