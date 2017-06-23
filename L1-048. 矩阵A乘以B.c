/*L1-048. 矩阵A乘以B

   给定两个矩阵A和B，要求你计算它们的乘积矩阵AB。需要注意的是，只有规模匹配的矩阵才可以相乘。即若A有Ra行、Ca列，B有Rb行、Cb列，则只有Ca与Rb相等时，两个矩阵才能相乘。

   输入格式：

   输入先后给出两个矩阵A和B。对于每个矩阵，首先在一行中给出其行数R和列数C，随后R行，每行给出C个整数，以1个空格分隔，且行首尾没有多余的空格。输入保证两个矩阵的R和C都是正数，并且所有整数的绝对值不超过100。

   输出格式：

   若输入的两个矩阵的规模是匹配的，则按照输入的格式输出乘积矩阵AB，否则输出“Error: Ca != Rb”，其中Ca是A的列数，Rb是B的行数。

   输入样例1：
   2 3
   1 2 3
   4 5 6
   3 4
   7 8 9 0
   -1 -2 -3 -4
   5 6 7 8
   输出样例1：
   2 4
   20 22 24 16
   53 58 63 28
   输入样例2：
   3 2
   38 26
   43 -5
   0 17
   3 2
   -11 57
   99 68
   81 72
   输出样例2：
   Error: 2 != 3
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   freopen("data.txt","r",stdin);
   int a,b,c,d,i,j;
   scanf("%d %d",&a,&b);
   int p[a][b];
   for(i=0; i<a; i++)
      for(j=0; j<b; j++)
         scanf("%d",&p[i][j]);
   scanf("%d %d",&c,&d);
   int q[c][d];
   for(i=0; i<c; i++)
      for(j=0; j<d; j++)
         scanf("%d",&q[i][j]);
   if(b!=c)
   {
      printf("Error: %d != %d",b,c);
      return 0;
   }
   int s[a][d],t;
   memset(s,0,sizeof(s));
   printf("%d %d\n",a,d);
   for(i=0; i<a; i++)
      for(j=0; j<d; j++)
         for(t=0; t<b; t++)
            s[i][j]+=p[i][t]*q[t][j];
   for(i=0; i<a; i++)
   {
      for(j=0; j<d; j++)
      {
         printf("%d",s[i][j]);
         if(j<d-1)
            printf(" ");
      }
      if(i<a-1)
         printf("\n");
   }





   return 0;
}
