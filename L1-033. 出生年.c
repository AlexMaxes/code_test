#include<stdio.h>
int judge(int num)
{
  int t[4]={0,0,0,0},i=3,j,s=0;
  while(num!=0)
  {
    t[i--]=num%10;
    num=num/10;
  }
  for(i=0;i<4;i++)
    for(j=i+1;j<4;j++)
      if(t[i]==t[j])
        t[j]=-1;
  for(i=0;i<4;i++)
    if(t[i]!=-1)
      s++;
  return s;
}
int main()
{
  //freopen("data.txt","r",stdin);
  int year,n;
  scanf("%d %d",&year,&n);
  int year1=year;
  while(judge(year)!=n)
    year++;
  printf("%d ",year-year1);
  int t[4]={0,0,0,0},i=3;
  while(year!=0)
  {
    t[i--]=year%10;
    year=year/10;
  }
  i=0;
  while(i<4)
  printf("%d",t[i++]);
  return 0;
}
