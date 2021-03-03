#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
        int info;
        struct node *next;
};
typedef struct node *NODEPTR;
NODEPTR list = NULL;
void insert_beg(int ele)
{
        NODEPTR q;
        q = (struct node *)malloc(sizeof(struct node));
        q->info = ele;
        q->next = list;
        list = q;
}
void display()
{
        NODEPTR q;
        q = list;
        printf("\nlist(%d)", list);
        for (q = list; q != NULL; q->next)
        {
                printf("-->[%d(%u)|%u]", q->info, q, q->next);
                q = q->next;
        }
        printf("\n");
}
int ele;
void main()
{
        int ch;
        clrscr();

        do
        {
                printf("\t1]insert from begning\n");
                printf("\t2]display\n");
                printf("Enter you choice:");
                scanf("%d", &ch);
                switch (ch)

                {
                case 1:
                        printf("\n Enter the element:");
                        scanf("%d", &ele);
                        insert_beg(ele);
                        break;
                case 2:
                        display();
                        break;
                }
        } while (ch);
        getch();
        /**********OUTPUT*************
	1]insert from begning
        2]display                                                               
Enter you choice:1                                                              
                                                                                
 Enter the element:20                                                           
        1]insert from begning                                                   
        2]display                                                               
Enter you choice:1                                                              
                                                                                
 Enter the element:60                                                           
	1]insert from begning
        2]display                                                               
Enter you choice:1                                                              
                                                                                
 Enter the element:40                                                           
        1]insert from begning                                                   
        2]display                                                               
Enter you choice:2                                                              
                                                                                
list(1952)-->[40(1952)|1944]-->[60(1944)|1936]-->[20(1936)|0]                   
	1]insert from begning  */
        2]display                                                               
Enter you choice:00
}
