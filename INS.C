#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n,a[30],key;
 clrscr();
 printf("Enter the no. of elements to be added\n");
 scanf("%d",&n);
 printf("Enter the elements\n");
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }

 for(j=1;j<n;j++)
 {
  key=a[j];
  i=j-1;
  while(i>=0 && a[i]>key)
  {
   a[i+1]=a[i];
   i=i-1;
  }
  a[i+1]=key;
 }
 printf("The sorted elements are : \n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }

 getch();
}

/*==================Output===================
Enter the no. of elements to be added
5
Enter the elements
17
54
15
19
99
The sorted elements are :
15
17
19
54
99
==========================================*/






                                                                                
                                                                                
                                                                                
                                                                                
