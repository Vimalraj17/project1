#include<stdio.h>
#include<strin.h>
int romantoint(char);
int value=0;
int main()
{
char roman[100];
int i=0;
printf("enter roman number:");
scanf("%c",&roman);
while(i=0)
{ 
 if(roman[i]!=='/n')
  romantoint(roman[i]);
  i++;
}
prinf("%d",value);
return 0;
}
int romantoint(char s)
{
 switch(s){
 case I:
  value=value+1;
 case V:
  value=value+5;
 case X:
  value=value+10;
 case L:
  value=value+50;
 case C:
  value=value+100;
 case D:
  value=value+500;
 case M:
  value=value+1000;
 default
  printf("Not a roman number");
 }
 return value;
}
