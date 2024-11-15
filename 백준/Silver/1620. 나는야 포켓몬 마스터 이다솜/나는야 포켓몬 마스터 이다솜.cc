/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1620                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: gmlwns904 <boj.kr/u/gmlwns904>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1620                           #+#        #+#      #+#    */
/*   Solved: 2024/04/08 20:16:15 by gmlwns904     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int N, M;
vector<string>v;
vector<string>r;

int main(){    
    ios_base::sync_with_stdio(0);   
    cin.tie(0); cout.tie(0);

    cin >> N >> M;
    map<string, int> m;
    string str;

    for(int i = 1 ; i <= N ; i++){
        cin >> str;
        m.insert({str , i});
        v.push_back(str);
    }

    for(int j = 0 ; j < M ; j++){
        cin >> str;
        if(str[0] >= 65 && str[0] <= 90){
            r.push_back(to_string(m[str]));
        }
        else{
            r.push_back(v[stoi(str)-1]);
        }
    }

    for(int i = 0 ; i< r.size(); i++)
        cout << r[i] << '\n';

    
}