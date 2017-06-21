#include<stdio.h>
int main()
{
  freopen("data.txt","r",stdin);
  char c[11];
  scanf("%s",c);
  int d=1;
  while(c[0]!='.')
  {
    scanf("%s",c);
    if(c[0]=='.')
      break;
    d++;
    if(d==2)
      printf("%s",c);
    if(d==14)
      printf(" and %s are inviting you to dinner...",c);
  }
  if(d==1)
    printf("Momo... No one is for you ...");
  else if(d<14)
    printf(" is the only one for you...");
  return 0;
}
