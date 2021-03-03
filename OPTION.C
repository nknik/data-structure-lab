#include<stdio.h>
#include<conio.h>
int a[20],ch,pos,i,b,n;
void create();
void insert();
void del();
void display();
main()
{
clrscr();
do
{
printf("1.create\n");
printf("\n select option 1");

printf("2.insert\n");
printf("3.del\n");
printf("4.display\n");
printf("\nenter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
create();
break;
case 2:
insert();
break ;
case 3:
del();
break;
case 4:
display();
break;
deafult:
printf("invalid choice");
break;
}
}
while(ch!=4);

getch();
}
void create()
{
printf("enter the number of element of array");
scanf("%d",&n);
printf("enter element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void insert()
{
printf("enter postion and element");
scanf("%d %d",&pos,&b);
for(i=n-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[pos-1]=b;

n=n+1;
}
void del()
{
printf("enter postion");
scanf("%d",&pos);
b=a[pos];
for(i=pos;i<n-1;i++)
{
a[i]=a[i+1];
}
n=n-1;
}
void display()
{
int i;
printf("\ndisplay array");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
}

