#include<stdio.h>
void main()
{
int i,j,a[100],b,d;
clrscr();
printf("Enter the integer\n");
scanf("%d",b);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
d=0;
for(i=0;i<b;i++)
{
if(a[i]==a[i])
d++;
}
if(d==1)
printf("%d",a[i]);
break;
}
getch();
}
