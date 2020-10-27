// my answer
#include<iostream>
using namespace std;
int main() {
  int a, b, c;
  string d;
  cin >> a >> b >> c >> d;
  cout << a+b+c << " " << d << endl;
  return 0;
}


// better answer
#include<stdio.h>
int main()
{
    int a,b,c;
    char s[101];
    // 整数の入力
    scanf("%d", &a);
    // スペース区切りの整数の入力
    scanf("%d %d",&b,&c);
    // 文字列の入力
    scanf("%s",s);
    // 出力
    printf("%d %s\n",a+b+c,s);
    return 0;
}
