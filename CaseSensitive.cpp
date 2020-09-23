// 2020.9.23 AtCoder Q1 https://atcoder.jp/contests/past202005-open/tasks/past202005_a
// failed part of the test cases
#include <bits/stdc++.h>
using namespace std;
int main () {
  	string a, b;
    cin >> a;
    cin >> b;
  	if (a.size() != b.size()) {
    	cout << "different" << endl;
      	return 0;
    }
  	int caseSensitiveCnt;
  	caseSensitiveCnt = 0;
  	for (int i=0; i < static_cast<int>(a.size()); i++) {
    	if(static_cast<int>(a.at(i)) != static_cast<int>(b.at(i))) {
          	if (static_cast<int>(a.at(i)) - static_cast<int>(b.at(i)) == 32) {
            	// samme alphabet different case
                caseSensitiveCnt++;
            } else {
            	cout << "different" << endl;
              	return 0;
            }
        }
    }
  	if (caseSensitiveCnt > 0) {
    	cout << "case-insensitive" << endl;
    } else {
    	cout << "same" << endl;
    }
}
