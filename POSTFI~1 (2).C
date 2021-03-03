#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

char stack[50];
char a[50];
int top=-1;
void push(int);
void cal(char);

void main()
 {
  int i;
  clrscr();
  printf("\n enterthe postfix expression=");
  gets(a);

  for(i=0;i<strlen(a);i++)
   {
    if(a[i]>='0' && a[i]<='9')
     {
       push(i);
     }
      if(a[i]=='+' || a[i]=='-' || a[i]=='/' || a[i]=='*' || a[i]=='^')
       {
	cal(a[i]);
       }
   }
  printf("\n\nresult=%d",stack[top]);
  getch();
 }
 void push(int j)
 {
  top++;
  stack[top]=(int)(a[j]-48);
  }
   void cal(char c)
    {

     int a,b,ans;
     b=stack[top];
     stack[top]='\0';
     top--;
     a=stack[top];
     stack[top]='\0';
     top--;

     switch(c)
     {
     case '+':
     ans=a+b;
     break;

     case'-':
     ans=a-b;
     break;

     case'/':
     ans=a/b;
     break;

     case'*':
     ans=a*b;
     break;

     case'^':
     ans=pow(a,b);
     break;
     }
     top++;
     stack[top]=ans;
     }
      getch();
      /***************OUTPUT***********

 enterthe postfix expression= 6 2 3 + - 3 8 2 / + * 2 ^ 3 +


result=52  *****************/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
