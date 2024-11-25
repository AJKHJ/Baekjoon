#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    
    while (1){
        string s;
        getline(cin, s);
        if(s == ".") break;
        stack<char> stk;
        bool chk = true;
        for(int i = 0 ; i < s.length() ; i++){
            char c = s[i];
            if(c == '(') stk.push(c);
            if(c == '[') stk.push(c);
            if(c == ')'){
                if(stk.size() == 0 || stk.top() == '['){
                    chk = false;
                    break;
                }else
                    stk.pop();
            }
            if(c == ']'){
                if(stk.size() == 0 || stk.top() == '('){
                    chk = false;
                    break;
                }else
                    stk.pop();
            }
        }
        if(stk.empty() && chk == true)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
    

    return 0;
}