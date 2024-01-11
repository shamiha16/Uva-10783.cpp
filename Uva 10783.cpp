#include<stdio.h>
int main()
{
     int T,i,k,a,b,sum=0;
     scanf("%d",&T);
     for (i=1;i<=T;i++)
     {scanf("%d%d",&a,&b);
     for (k=a;k<=b;k++)
     {if (k%2!=0){
     sum+=k;}}
printf("Case %d:%d\n",i,sum);
sum=0;}

return 0;}
