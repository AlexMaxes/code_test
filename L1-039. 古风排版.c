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
