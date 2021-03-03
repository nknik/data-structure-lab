#include<stdio.h>
#include<conio.h>
void swap();
int i,j,n,a[30],min,temp;
void main()
{
 clrscr();
 printf("Enter the no. of elements to be added\n");
 scanf("%d",&n);
 printf("Enter the elements\n");

//Create Array

 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);

  }
//Selection Logic

 for(i=0;i<n-1;i++)
 {
  min=i;
  for(j=i+1;j<n;j++)
  {
   if(a[j]<a[i])
   min=j;
  }
  swap();
 }

 printf("The sorted elements are : \n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }

 getch();
}
//Swapping Logic

void swap()
{
 temp=a[i];
 a[i]=a[min];
 a[min]=temp;
}

/*======================Output=====================
Enter the no. of elements to be added
5
Enter the elements
5
4
3
2
1
The sorted elements are :
1
2
3
4
5
=================================================*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
