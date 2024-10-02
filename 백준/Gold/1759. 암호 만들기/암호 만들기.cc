#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int L,C;
char A[20], M[30];

void go(int i, int mo, int ja, string &a){
    if(mo + ja == L){
        if(mo>=1 && ja>=2) cout << a << '\n';
        return;
    }
    if(i==C) return;


    a+= A[i];
    if(A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'u' || A[i] == 'o')
        go(i+1, mo+1, ja ,a);
    else
        go(i+1 , mo , ja+1 , a);

    a.pop_back();


    go(i+1, mo, ja , a);

}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin >> L >> C;
    for(int i = 0 ; i < C ; i++) cin >> A[i];
    sort(A,A+C);
    
    string a ="";
    go(0,0,0,a);
    return 0;
}
