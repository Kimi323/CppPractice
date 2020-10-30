// ABC081A my answer
#include<iostream>
using namespace std;
int main() {
  int a, count;
  string s;
  count = 0;
  scanf("%d", &a);
  s = to_string(a);

  for (int i = 0; i < 3; i++) {
  	if (s[i] == '1') count++;
  }
  printf("%d", count);
  return 0;
}
