#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n, sum , o , asum , bsum , acnt, bcnt;
string str, prev1;

string print(int a){
    string h = "00" + to_string(a/60);
    string m = "00" + to_string(a%60);
    return h.substr(h.size() -2 , 2) + ":" + m.substr(m.size() -2,2);
}
 
int changeint(string s){
    return atoi(s.substr(0,2).c_str()) * 60 + atoi(s.substr(3,2).c_str()) ;
}

void go(int &sum , string s){
    sum += (changeint(s) -  changeint(prev1));
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    
    cin >> n;
    for(int i =0 ;  i< n ; i++){
        cin >> o >> str;
        if(acnt > bcnt) go(asum, str);
        if(acnt < bcnt) go(bsum, str);
        if(o == 1) acnt ++;
        else if (o == 2) bcnt++;
        prev1 = str;
    }
    if(acnt > bcnt) go(asum, "48:00");
    else if(acnt < bcnt) go(bsum, "48:00");
    cout << print(asum) << '\n';
    cout << print(bsum) << '\n';
    return 0;
}