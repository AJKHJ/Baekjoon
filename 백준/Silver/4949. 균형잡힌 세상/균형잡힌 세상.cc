#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);   
    cin.tie(0); cout.tie(0);

    char cha;

    while(1){
        string str;
        getline(cin , str);

        if(str == ".")
            break;
        
        stack<char>stk;
        bool flag = 0;

        for(int i = 0 ; i < str.length() ; i++){
            char c = str[i];

            if(c == '(' || c == '['){
                stk.push(c);
            }

            else if(c == ')'){
                if(!stk.empty() && stk.top() == '(')
                    stk.pop();
                else{
                    flag = 1;
                    break;
                }
            }

            else if(c == ']'){
                if(!stk.empty() && stk.top() == '[')
                    stk.pop();
                else{
                    flag = 1;
                    break;
                }
            }
        }
        if (flag==0 && stk.empty()) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}
