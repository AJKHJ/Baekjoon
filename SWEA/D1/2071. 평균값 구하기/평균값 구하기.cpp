#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int test_case;
	int T, num;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)	{
        double sum = 0.0;
        for(int i = 0 ; i < 10 ; i++){
            cin >> num;
            sum += num;
        }
        cout << "#" << test_case <<" " << round(sum/10) << endl;
	}
	return 0;
}