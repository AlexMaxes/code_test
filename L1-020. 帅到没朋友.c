/*
   当芸芸众生忙着在朋友圈中发照片的时候，总有一些人因为太帅而没有朋友。本题就要求你找出那些帅到没有朋友的人。

   输入格式：

   输入第一行给出一个正整数N（<=100），是已知朋友圈的个数；随后N行，每行首先给出一个正整数K（<=1000），为朋友圈中的人数，然后列出一个朋友圈内的所有人——为方便起见，每人对应一个ID号，为5位数字（从00000到99999），ID间以空格分隔；之后给出一个正整数M（<=10000），为待查询的人数；随后一行中列出M个待查询的ID，以空格分隔。

   注意：没有朋友的人可以是根本没安装“朋友圈”，也可以是只有自己一个人在朋友圈的人。虽然有个别自恋狂会自己把自己反复加进朋友圈，但题目保证所有K超过1的朋友圈里都至少有2个不同的人。

   输出格式：

   按输入的顺序输出那些帅到没朋友的人。ID间用1个空格分隔，行的首尾不得有多余空格。如果没有人太帅，则输出“No one is handsome”。

   注意：同一个人可以被查询多次，但只输出一次。

   输入样例1：
   3
   3 11111 22222 55555
   2 33333 44444
   4 55555 66666 99999 77777
   8
   55555 44444 10000 88888 22222 11111 23333 88888
   输出样例1：
   10000 88888 23333
   输入样例2：
   3
   3 11111 22222 55555
   2 33333 44444
   4 55555 66666 99999 77777
   4
   55555 44444 22222 11111
   输出样例2：
   No one is handsome
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   freopen("data.txt","r",stdin);
   int visit[100000];
   int n,m,k,id,i,j;
   scanf("%d",&n);
   memset(visit,0,sizeof(visit));
   for(i=0; i<n; i++) {
      scanf("%d",&k);
      for(j=0; j<k; j++) {
         scanf("%d",&id);
         if(k == 1)
            break;
         visit[id] = 1;
      }
   }
   scanf("%d",&m);
   int searId,flag = 0;
   for( i=0; i<m; i++) {
      scanf("%d",&searId);
      if(!visit[searId]) {
         if(++flag > 1)
            printf(" ");
         printf("%05d",searId);
         visit[searId] = 1;
      }
   }
   if(flag == 0)
      printf("No one is handsome");
   return 0;
}
/*
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
   int main()
   {
   freopen("data.txt","r",stdin);
   int n;
   scanf("%d",&n);
   int t[n][1001],i,j,k;
   for(i=0; i<n; i++) {
      scanf("%d",&t[i][0]);
      for(j=0; j<t[i][0]; j++)
         scanf("%d",&t[i][j+1]);
   }
   int m;
   scanf("%d",&m);
   int p[2][m],f1=0;
   for(i=0; i<m; i++) {
      p[1][i]=0;
      scanf("%d",&p[0][i]);
   }

   for(i=0; i<m; i++) {
      for(j=0; j<n; j++) {
         for(k=0; k<t[j][0]; k++) {
            f1=0;
            if((p[0][i]==t[j][k+1])&&(t[j][0]!=1)) {
               p[1][i]=1;
               f1=1;
               break;
            }
         }
         if(f1)
            break;
      }
   }
   int s=0,s2=0,s3=0;
   for(i=0; i<m; i++) {
      if(!p[1][i]) {
         for(j=i+1; j<m; j++)
            if(p[0][i]==p[0][j])
               p[1][j]=1;
      }
   }
   for(i=0; i<m; i++)
      if(!p[1][i])
         s2++;
   for(i=0; i<m; i++)
   {
      if(!p[1][i])
      {
         printf("%05d",p[0][i]);
         s3++;
         if(s3<s2)
            printf(" ");
      }
      else
         s++;
   }
   if(s==m)
      printf("No one is handsome");
   return 0;
   }
 */
