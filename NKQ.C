#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

int num, A[MAX], rear=-1, front=-1,i;

void enqueue(int num)
{
  if(rear==MAX-1)
  printf("Overflow Condition\n");
  else
  {
    ++rear;
    A[rear]=num;
    printf("Enqueued %d in A[%d]\n", num,rear);
  }
}

void dequeue()
{
  if(front==-1 && rear==-1)
  {
    printf("UnderFlow Condition.\n");
  }
  else if(front<=rear)
  {
     int temp;
       if(front==-1)
	  {
	    ++front;
	  }
       temp = A[front];
       ++front;

       printf("Successfully Dequeued %d.\n", temp);
       A[front-1]=0;
  }
  else
  {
    printf("Cannot perform dequeue further.");
  }
}
void display()
{
int i;
for(i=0;i<MAX;i++)
{
printf("%d",A[i]);
}
}


void main()
{
  int ch;
  clrscr();
  printf("====MENU====\n") ;
  printf("\t[1] Enqueue\n\t[2] Dequeue\n\t[3] Display\n\t[4] EXIT\n");
  start:
  printf("Enter your choice: ");
  scanf("%d", &ch);
  switch(ch)
  {
    case 1:
       printf("Enter a number to enqueue: ");
       scanf("%d", &num);
       enqueue(num);
       goto start;
    case 2:
	dequeue();
	goto start;
    case 3:
	display();
	goto start;

    case 4:
      exit(0);
    default:
	 printf("Please enter a valid choice.");
	 goto start;
  }
}
/*==============================OUTPUT=========================
====MENU====
        [1] Enqueue                                                             
        [2] Dequeue                                                             
        [3] Display                                                             
        [4] EXIT                                                                
Enter your choice: 1                                                            
Enter a number to enqueue: 1                                                    
Enqueued 1 in A[0]                                                              
Enter your choice: 1                                                            
Enter a number to enqueue: 2                                                    
Enqueued 2 in A[1]                                                              
Enter your choice: 1                                                            
Enter a number to enqueue: 3                                                    
Enqueued 3 in A[2]
Enter your choice: 1                                                            
Enter a number to enqueue: 4                                                    
Enqueued 4 in A[3]                                                              
Enter your choice: 3                                                            
12340Enter your choice: 2                                                       
Successfully Dequeued 1.                                                        
Enter your choice: 3
02340Enter your choice: 4
===============================================*/



