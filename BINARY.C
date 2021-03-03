#include<stdio.h>
#include<conio.h>
void main()
{
int n,low,high,mid,key,a[100],i,j;
clrscr();
printf("Enter The Size OF array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter The Elements of array");
scanf("%d",&a[i]);
}
printf("\n Enter The Number To be Searched");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
printf("element is at %d",mid+1);
break;
}
else
if(key>a[mid])
low=mid+1;
else
high=mid-1;
}
if(low>high)
{
printf("\n Element nor Found");
}
getch();
}