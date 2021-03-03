#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20];
int m,n,x,i,j,c=0,v=0;
clrscr();
printf("Enter no of rows");
scanf("%d",&n);
printf("\n Enter no of columns");
scanf("%d",&m);
x=n*m;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
if(a[i][j]!=0)
{
c++;
}
else
{
v++;
}
}
}
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<m;j++)
{
printf("%d\t",a[i][j]);
}
}
printf("\n\n\n");
printf("row\tcol.\tval");
if(v>x/2)
{
printf("given matrix is sparse matrix");
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<m;j++)
{
if(a[i][j]!=0)
{
printf("%d\t",i);
printf("%d\t",j);
printf("%d\t",a[i][j]);
}
}
}
}

getch();

 }





 \