#include<stdio.h>
#include<conio.h>
int stack[5];
int top=-1;

void push()
{
int x;
clrscr();
printf("\n enter a number to push");
scanf("%d",&x);
top=top+1;
stack[top]=x;
}
void pop()
{
int y;
y=stack[top];
top--;
}
void display()
{
int i;
clrscr();
for(i=0;i<5;i++)
printf("\n stack is %d", stack[1]);
}
void main()
{
int s;
clrscr();
printf("enter 1 for push, enter 2 for pop:");
scanf("%d",&s);

switch(s)
{
case 1:
push();
display();
break;
case 2:
pop();
break;
display();
}
getch();
}
 *****OUTPUT*****

 stack is 12
 stack is 0                                                                     
 stack is 0                                                                     
 stack is 0                                                                     
 stack is 0
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
