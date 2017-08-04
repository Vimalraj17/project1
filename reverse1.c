#include<stdio.h>
int main()
{
int n,i;
char arr[n];
scanf("%d",&n);
for(i=0;i<n;i++)
 scanf("%c\t",&arr[i]);
for(i=n-1;i>=0;i++)
 printf("%c\t",arr[i]);
 return 0;
}
