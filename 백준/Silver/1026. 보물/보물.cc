#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int N;
vector<int> A;
vector<int> B;

int cmp(int a, int b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    cin >> N;
    A.resize(N);
    B.resize(N);

    for(int i = 0 ; i < N ; i++) 
        cin >> A[i];

    for(int i = 0 ; i < N ; i++) 
        cin >> B[i];


    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), cmp);

    int sum = 0;

    for(int i = 0 ; i < N ; i++) sum += A[i] * B[i];
    
    cout << sum;

    return 0;
}