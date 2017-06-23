/*中国的古人写文字，是从右向左竖向排版的。本题就请你编写程序，把一段文字按古风排版。

输入格式：

输入在第一行给出一个正整数N（<100），是每一列的字符数。第二行给出一个长度不超过1000的非空字符串，以回车结束。

输出格式：

按古风格式排版给定的字符串，每列N个字符（除了最后一列可能不足N个）

输入样例：
4
This is a test case
输出样例：
asa T
st ih
e tsi
 ce s
 */
#include<stdio.h>
#include<string.h>
int main(){
  //freopen("data.txt","r",stdin);
  int n;
  scanf("%d\n",&n);
  char s[1090];
  gets(s);
  int i=0,j,num=0;
  num=strlen(s);
  int rear=num;
  for(i=rear;i<=1088;i++)
    s[i]=' ';
  int h;
  if(num%n==0)
    h=num/n;
  else
    h=num/n+1;
  char T[n][h];
  int t=0;
  for(i=h-1;i>=0;i--)
    for(j=0;j<n;j++)
      T[j][i]=s[t++];
  t=0;
  for(i=0;i<n;i++)
    for(j=0;j<h;j++)
    {
      printf("%c",T[i][j]);
      if((++t)%h==0)
      if(t!=n*h)
        printf("\n");
    }
    return 0;
}
